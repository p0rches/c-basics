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

int any(char s1[], char s2[]) {
  int i, j;

  for (i = j = 0; s1[i] != '\0'; ++i) {
    if (contains(s2, s1[i])) {
      return i;
    }
  }

  return -1;
}

int main() {
  char s1[MAXSTR] = "ABCDEFG";
  char s2[MAXSTR] = "HHHEHHH";

  signed int result = any(s1, s2);

  printf("Result pstn: %d\n", result);
  if (result != -1) {
    printf("Result char: %c\n", s1[result]);
  } else {
    printf("Result char: NO MATCH\n");
  }

  return 0;
}
