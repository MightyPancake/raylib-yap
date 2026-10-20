# raylib-yap

yap bindings for [raylib](https://www.raylib.com/), generated from `raylib.h`.

## Use

Declare it in your project's manifest:

```
module myproject {
    version: "0.1.0",
    deps: [
        { name: "raylib", version: "^6.0.0",
          git: "https://github.com/MightyPancake/raylib-yap", tag: "v6.0.0" }
    ]
}

import raylib
```

Then:

```
yap install
yap main.yp -o main
```

`yap install` clones this repo to `.yap/modules/raylib/6.0.0/` and compiles
`wrapper.c` into `libraylib.a`/`libraylib.so` beside it.

You need raylib itself installed. This module declares raylib as a library for
each native target, so the compiler asks pkg-config where it is and puts the
result on the link line; if raylib ships no `.pc` file on your system, it falls
back to a bare `-lraylib` and expects the library on the default search path.

## The web

`yap -bcc=emcc` builds these bindings for the browser, where the same source
runs unchanged -- including the ordinary `while (!WindowShouldClose())` loop,
which on web is `emscripten_sleep` plus a `false` and so needs `-sASYNCIFY` to
suspend and resume. Two more flags matter: `-sUSE_GLFW=3`, because raylib's web
backend draws through emscripten's own GLFW, and an optimisation level, since
Asyncify at `-O0` produces a large module.

```sh
make wasm        # builds libraylibweb_wasm.a: raylib itself, compiled by emcc
yap -bcc=emcc -bO2 -bf=-sUSE_GLFW=3 -bf=-sASYNCIFY -bf=-sALLOW_MEMORY_GROWTH     -o app.js main.yp
```

The `libs` entries above are targeted at `linux`, `macos` and `windows` on
purpose: untargeted they applied to every build, so a wasm build asked
pkg-config for a *native* raylib and put it on an emcc link line. A wasm build
takes its libraries from the module directory instead, where yap collects every
`lib*_wasm.a` and ignores the native `.a`/`.so`:

| | |
|---|---|
| `libraylib_wasm.a` | the prefixed wrapper, built by `yap install` wherever emcc is present |
| `libraylibweb_wasm.a` | raylib itself for wasm32, from `make wasm` (emscripten ships no raylib port, so there is nothing to `--use-port`) |

Both are gitignored, like the native ones. `make wasm` clones raylib at the tag
named in the makefile, which must match `RAYLIB_VERSION` in `raylib.h` -- these
bindings were generated from that header, and a wrapper compiled against one
raylib linked into another is a silent struct-layout mismatch.

Two things do not survive the trip, neither of them fatal: `GetFileModTime`
returns C `long`, which is 8 bytes natively and 4 under wasm32 while the
binding says `i64`; and anything that loads from `resources/` needs the files
packaged into the build with `--preload-file`.

## How the wrapper works

raylib's own symbols are unprefixed (`InitWindow`), but a yap module namespaces
its bindings under its prefix. `wrapper.c` bridges that: every entry point is
re-exported as `raylib_InitWindow` and forwards to the real one. It contains no
logic, only forwarding, which is why the real raylib still has to be linked.

## Contents

| | |
|---|---|
| `mod.yp` | module manifest |
| `binds.yp` | generated bindings |
| `wrapper.c` | prefixed C wrapper |
| `raylib.h` | the header the bindings came from |
| `colors.yp`, `constants.yp` | hand-written conveniences |
| `examples/` | runnable examples, with the assets they load |

## Examples

```
cd examples
yap install                                    # links the module from ..
yap raylib_basic_window.yp -o basic_window && ./basic_window
```

`examples/mod.yp` declares this repo's own module as a path dependency, so the
examples build against the working tree rather than a published version.

`raylib_music_stream` and `raylib_model_animation` load from `resources/`, so
run them from inside `examples/`. The model example needs a raylib built with
`SUPPORT_GPU_SKINNING`; it loads an explicit skinning shader for that reason.

## Regenerating the bindings

```
yap --gen-c-bind 'raylib.h' --prefix raylib_ -o binds.yp
```
