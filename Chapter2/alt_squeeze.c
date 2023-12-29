#include <stdio.h>

#define MAXSTR 100

int contains(char s[], char c) {
  for (int i = 0; s[i] != '\0'; ++i) {
    if (s[i] == c) {
      return 1;
    }
  }
  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i, j;

  printf("String 1 before: %s\n", s1);
  printf("String 2 before: %s\n", s2);

  for (i = j = 0; s1[i] != '\0'; ++i) {
    if (!contains(s2, s1[i])) {
      s1[j++] = s1[i];
    }
  }

  s1[j] = '\0';

  printf("String 1 after:  %s\n", s1);
}

int main() {
  char string1[MAXSTR] = "ABCDEFG";
  char string2[MAXSTR] = "ACDE";

  squeeze(string1, string2);

  return 0;
}
