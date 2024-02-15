#include <ctype.h>
#include <stdio.h>

#define MAX 10000

int get_str(char str[], int limit);
void expand(char src[], char dest[]);

int main(void) {
  char str[MAX];
  char expanded_str[MAX];

  get_str(str, MAX);
  expand(str, expanded_str);
  printf("%s", expanded_str);

  return 0;
}

int get_str(char str[], int limit) {
  int c, i = 0;

  while (i < limit - 1 && (c = getchar()) != EOF) {
    str[i++] = c;
  }
  str[i] = '\0';

  return i;
}

void expand(char src[], char dest[]) {
  /*
   * a-z
   * a-b-c
   * a-c-h-v
   * a-c-b-v
   * 0-9
   * 1-5
   * a-zA-Z
   * 0-9a-zA-Z
   * -a-z
   *  a-z-
   *  -a-z-
   *  */

  int i, j = 0;

  for (i = 0; i < MAX - 1 && j < MAX - 1 && src[i]; ++i) {
    if (isalnum(src[i]) && src[i + 1] == '-' && src[i] < src[i + 2]) {
      do {
        int k;
        for (k = 0; k <= (src[i + 2] - src[i]); ++k) {
          int temp = src[i] + k;
          if (dest[j - 1] != temp && (isdigit(temp) || isalpha(temp))) {
            dest[j++] = temp;
          }
        }
        i += 2;
      } while (isalnum(src[i]) && src[i + 1] == '-' && src[i] < src[i + 2]);
    } else {
      dest[j++] = src[i];
    }
  }
  dest[j] = '\0';
}
