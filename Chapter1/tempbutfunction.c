#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
int tempConversion(int tempIn);
/* Print Fahrenheit-Celsius table */
int main() {
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6d\n", fahr, tempConversion(fahr));
  }
}

int tempConversion(int tempIn) {
  int tempOut;
  tempOut = (5.0 / 9.0) * (tempIn - 32);
  return tempOut;
}
