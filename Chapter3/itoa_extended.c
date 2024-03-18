#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

void itoa(int n, char s[], int w);
void str_rev(char str[], int index, int size);

int main(void) {
  char str[MAX];
  int num = 12345789;
  int width = 20;

  itoa(num, str, width);

  printf("%lu\n", strlen(str));
  printf("\n");
  printf("%s\n", str);

  return 0;
}

void itoa(int n, char s[], int w) {
  int i, sign;

  sign = n;

  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while ((n /= 10) > 0);

  if (sign < 0) {
    s[i++] = '-';
  }

  while (strlen(s) < w) {
    s[i++] = ' ';
  }

  s[i] = '\0';

  int str_len = strlen(s);
  str_rev(s, 0, str_len - 1);
}

void str_rev(char str[], int index, int size) {
  char temp;

  temp = str[index];
  str[index] = str[size - index];
  str[size - index] = temp;

  if (index == size / 2) {
    return;
  }

  str_rev(str, index + 1, size);
}
