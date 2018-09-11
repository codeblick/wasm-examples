#include <stdio.h>
#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE counter(int iStart) {
    return iStart + 1;
}
