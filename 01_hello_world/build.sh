#!/usr/bin/env bash

mkdir -p build

docker run --rm -v $(pwd):/src trzeci/emscripten emcc -o build/index.html src/webasm.c -O3 -s WASM=1 --shell-file src/template.html


