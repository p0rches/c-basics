#include <stdio.h>
#define MAX 1000 /* maximum input length */

int get_line(char line[], int max);
int strindex(char source[], char search[]);

char pattern[] = "ould"; /* search string */

/* find all lines matching pattern */
int main() {
  char line[MAX];
  int found = 0;

  while (get_line(line, MAX) > 0) {
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  }
  return found;
}

/* get_line: get line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
    s[i++] = c;
  }
  if (c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';
  return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[]) {
  int i, j, k;

  for (i = 0; s[i] != '\0'; i++) {
    for (j = 0, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0') {
      return i;
    }
  }
  return -1;
}
