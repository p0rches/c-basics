#include <stdio.h>

#define MAX_CHAR 128

int main() {
  int frequencies[MAX_CHAR] = {0};
  int i, j, count;

  printf("Enter a sentence: ");

  // Read characters until newline
  int c;
  while ((c = getchar()) != '\n') {
    frequencies[c]++;
  }

  // Print histogram
  printf("\nCharacter Frequency Histogram:\n");
  for (i = 0; i < MAX_CHAR; i++) {
    if (frequencies[i] > 0) {
      printf("%c: ", i);
      for (j = 0; j < frequencies[i]; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}
