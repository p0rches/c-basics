#include <ctype.h>
#include <stdio.h>

#define MAX 1000

int main() {
  double sum, atof(char[]);
  char line[MAX];
  int get_line(char line[], int max);

  sum = 0;
  while (get_line(line, MAX) > 0) {
    printf("\t%g\n", sum += atof(line));
  }
  return 0;
}

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

double atof(char s[]) {
  double val, power;
  int i, sign, exp_sign = 1, exp_pwr = 0;

  for (i = 0; isspace(s[i]); i++) /* skips any blanks at the start */
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') {
    i++;
  }
  for (val = 0.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
  }
  if (s[i] == '.') {
    i++;
  }
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }
  if (s[i] == 'e' || s[i] == 'E') {
    if (s[++i] == '-') {
      exp_sign = -1;
      i++;
    }
    while (isdigit(s[i])) {
      exp_pwr = 10 * exp_pwr + (s[i] - '0');
      i++;
    }
  }
  while (exp_pwr) {
    if (exp_sign == -1) {
      power *= 10;
    } else {
      power /= 10;
    }
    --exp_pwr;
  }
  return sign * val / power;
}
