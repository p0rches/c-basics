#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

char itoc(int a);
void itob(int n, char s[], int b);
void str_rev(char str[], int index, int size);

int main(void) {
  char str[MAX];

  int num = 12345789;

  itob(num, str, 16);

  printf("%s\n", str);

  return 0;
}

char itoc(int a) {
  if (a <= 9) {
    return a + '0';
  }
  return a + 'a' - 10;
};

void itob(int n, char s[], int b) {
  int i = 0, sign = n;

  do {
    s[i++] = itoc(abs(n) % b);
    n /= b;
  } while (n);

  switch (b) {
  case 2:
    s[i++] = 'b';
    s[i++] = '0';
    break;
  case 16:
    s[i++] = 'x';
    s[i++] = '0';
    break;
  }

  if (sign < 0) {
    s[i++] = '-';
  }

  s[i] = '\0';

  int s_len = strlen(s);
  str_rev(s, 0, s_len - 1);
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
