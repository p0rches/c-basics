#include <stdio.h>

int main() {
  int year[] = {2024, 2023, 2022, 2021, 2020};
  // int year = 2023;
  for (int i = 0; i < 5; i++) {
    if ((year[i] % 4 == 0 && year[i] % 100 != 0) || year[i] % 400 == 0) {
      printf("%d is a leap year\n", year[i]);
    } else {
      printf("%d is not a leap year\n", year[i]);
    }
  }

  return 0;
}
