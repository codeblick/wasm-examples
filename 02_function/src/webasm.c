#include <stdio.h>
#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE myFunction(int iStart) {
    return iStart + 1;
}
