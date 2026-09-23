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

You need raylib itself installed. This module declares `libs: ["raylib"]`, so
the compiler asks pkg-config where it is and puts the result on the link line;
if raylib ships no `.pc` file on your system, it falls back to a bare
`-lraylib` and expects the library on the default search path.

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
| `raylib_*.yp` | examples |

## Regenerating the bindings

```
yap --gen-c-bind 'raylib.h' --prefix raylib_ -o binds.yp
```
