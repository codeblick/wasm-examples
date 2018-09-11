#include <stdio.h>
#include <stdint.h>
#include <emscripten/emscripten.h>

int size(uint8_t *buffer, int length, int album) {
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (buffer[i] == album) {
        count += 1;
    }
  }

  return count;
}
