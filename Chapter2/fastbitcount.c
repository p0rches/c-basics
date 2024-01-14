#include <math.h>
#include <stdio.h>

void printbits(unsigned int x);
int bitcount(unsigned int x);

int main() {
  unsigned int num = 0b11111111;

  printbits(num);
  printf("Bit count: %d\n", bitcount(num));

  return 0;
}

void printbits(unsigned int x) {
  unsigned int n = sizeof(unsigned int);

  printf("0b");

  int i;
  for (i = n * 8 - 1; i >= 0; --i) {
    (x & (unsigned int)pow(2, i)) ? putchar('1') : putchar('0');
  }

  putchar('\n');
}

int bitcount(unsigned int x) {
  int bits;

  while (x) {
    x &= (x - 1);
    ++bits;
  }

  return bits;
}
