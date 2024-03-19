#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

int get_line(char line[], int max);
int strrindex(char source[], char search[]);

char pattern[] = "ould";

int main(int argc, char *argv[]) {
  char line[MAXLEN];
  int found = 0;

  while (get_line(line, MAXLEN) > 0) {
    if (strrindex(line, pattern)) {
      found = strrindex(line, pattern);
      printf("%s", line);
      printf("%d\n", found);
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

/* strrindex: return the index of the rightmost occurence of the search */
int strrindex(char s[], char t[]) {
  int i, j, k;

  for (i = strlen(s) - 1; s[i] != '\0'; i--) {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0') {
      return i;
    }
  }
  return -1;
}
