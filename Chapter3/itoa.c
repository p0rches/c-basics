#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

void int_to_array(int n, char s[]);
void str_rev(char str[], int index, int size);

int main(void) {
  char str[MAX];
  int num = 12345789;

  int_to_array(num, str);

  printf("%s\n", str);

  return 0;
}

void int_to_array(int n, char s[]) {
  int i, sign;

  sign = n;

  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while ((n /= 10) > 0);

  if (sign < 0)
    s[i++] = '-';

  s[i] = '\0';
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
