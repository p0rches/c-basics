#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c\n"
#define BYTE_TO_BINARY(byte)                                                   \
  (byte & 128 ? '1' : '0'), (byte & 64 ? '1' : '0'), (byte & 32 ? '1' : '0'),  \
      (byte & 16 ? '1' : '0'), (byte & 8 ? '1' : '0'), (byte & 4 ? '1' : '0'), \
      (byte & 2 ? '1' : '0'), (byte & 1 ? '1' : '0')

unsigned invert(unsigned x, int p, int n);

int main() {
  unsigned num = 0b11001100;

  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(invert(num, 2, 3)));

  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  ++p;

  unsigned mask_1 = ~(~0u << n) << p;

  // printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(mask_1));
  // printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(mask_2));
  return x ^ mask_1;
}
