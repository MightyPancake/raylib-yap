# raylib itself, built for the web. The wrapper archives beside this file are built by
# `yap install` (native) and by the same step under emcc (lib<name>_wasm.a) -- this
# makefile only covers the thing yap can't build for you: raylib proper.
#
# A native build gets raylib from the system through pkg-config (see mod.yp's libs).
# There is no such thing for wasm: emscripten ships no raylib port (`emcc --show-ports`
# lists sdl2, contrib.glfw3 and ~25 others, not raylib), so an emcc build needs an
# emcc-built raylib vendored into the module directory, where yap's import resolution
# collects every lib*_wasm.a it finds.

# Must match RAYLIB_VERSION in raylib.h -- that is the header binds.yp was generated
# from, and a wrapper compiled against one raylib linked into another is exactly the
# kind of silent struct-layout mismatch that costs a day to find.
RAYLIB_TAG ?= 6.0
RAYLIB_SRC ?= third_party/raylib

.PHONY: wasm clean_wasm

wasm: libraylibweb_wasm.a

$(RAYLIB_SRC):
	git clone --depth 1 --branch $(RAYLIB_TAG) https://github.com/raysan5/raylib.git $@
	@cmp -s $@/src/raylib.h raylib.h \
		|| echo "WARNING: $@/src/raylib.h differs from the raylib.h binds.yp came from"

# PLATFORM_WEB leaves rglfw.c out and uses emscripten's own GLFW (hence -sUSE_GLFW=3 on
# the consuming link line) and OpenGL ES 2.0, which emscripten translates to WebGL.
# Renamed on the way in: upstream calls it libraylib.web.a, and yap only recognises a
# wasm-flavored module library by a _wasm.a suffix.
libraylibweb_wasm.a: $(RAYLIB_SRC)
	nix-shell -p emscripten --run "$(MAKE) -C $(RAYLIB_SRC)/src PLATFORM=PLATFORM_WEB"
	cp $(RAYLIB_SRC)/src/libraylib.web.a $@
	@echo "built $@ (raylib $(RAYLIB_TAG) for wasm32)"

clean_wasm:
	rm -f libraylibweb_wasm.a
	$(MAKE) -C $(RAYLIB_SRC)/src clean PLATFORM=PLATFORM_WEB 2>/dev/null || true
