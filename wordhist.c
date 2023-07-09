#include <stdio.h>

#define MAX_LENGTH 10

/* counts lengths of words entered and returns histogram */
int main() {
  int lengths[MAX_LENGTH];
  int i, j, count, length;

  for (i = 0; i < MAX_LENGTH; i++) {
    lengths[i] = 0;
  }

  printf("Enter a sentence: ");

  count = 0;
  length = 0;
  char c;

  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      if (length > 0) {
        lengths[length]++;
        count++;
      }
      length = 0;
    } else {
      length++;
    }
  }

  if (length > 0) {
    lengths[length]++;
    count++;
  }

  printf("\nWord Length Histogran:\n");
  for (i = 1; i < MAX_LENGTH; i++) {
    printf("%2d: ", i);
    for (j = 0; j < lengths[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
