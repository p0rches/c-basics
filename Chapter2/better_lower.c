#include <stdio.h>

#define MAXSTR 100

int lower(int c);

int main() {
  char str[MAXSTR] = "AlphaBetaCharlie";
  char result[MAXSTR];
  int i;

  for (i = 0; str[i] != '\0'; ++i) {
    result[i] = lower(str[i]);
  }

  printf("%s\n", result);

  return 0;
}

int lower(int c) { return (c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c); }
