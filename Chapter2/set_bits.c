#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c\n"
#define BYTE_TO_BINARY(byte)                                                   \
  (byte & 128 ? '1' : '0'), (byte & 64 ? '1' : '0'), (byte & 32 ? '1' : '0'),  \
      (byte & 16 ? '1' : '0'), (byte & 8 ? '1' : '0'), (byte & 4 ? '1' : '0'), \
      (byte & 2 ? '1' : '0'), (byte & 1 ? '1' : '0')

unsigned setbits(unsigned x, int p, int n, int y);

int main() {
  unsigned num_1 = 0b11010101;
  unsigned num_2 = 0b00111011;

  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(num_1));
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(setbits(num_1, 2, 4, num_2)));

  return 0;
}

unsigned setbits(unsigned x, int p, int n, int y) {
  ++p;

  unsigned mask_1 = (~(~(~0 << n) << p) & x);
  unsigned mask_2 = (~(~0 << n) & y) << p;

  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(mask_1));
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(mask_2));
  printf("\n");

  return mask_1 | mask_2;
}

// 11010101
// 10000101
// 01011000
// 11011101
