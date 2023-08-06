#include <stdio.h>
#include <string.h>
#define MAXLINE 100

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);
void remove_trailing_whitespace(char line[]);

int main() {
  int len, max, i;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = my_getline(line, MAXLINE)) > 0)
    remove_trailing_whitespace(line);
  if (len > max) {
    max = len;
    copy(longest, line);
  }

  if (max > 0)
    printf("%s", longest);
  return 0;
}

int my_getline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

void remove_trailing_whitespace(char line[]) {
  int len = strlen(line);
  while (len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t' ||
                     line[len - 1] == '\n')) {
    line[len - 1] = '\0'; // Replace whitespace with null terminator
    len--;
  }
}
