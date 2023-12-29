#include <stdio.h>

#define MAXLEN 100

int atoi(char s[]);

int main(int argc, char *argv[]) {
  char s[MAXLEN] = "1234";

  printf("STR: %s", s);
  printf("\n");
  printf("INT: %i", atoi(s));

  return 0;
}

int atoi(char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
