#!/usr/bin/env bash

mkdir -p build

docker run --rm -v $(pwd):/src trzeci/emscripten emcc -o build/index.html src/webasm.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_size']" --shell-file src/template.html -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'


