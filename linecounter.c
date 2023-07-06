#include <stdio.h>

int main() {
  int c, nl, tab, blank;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    };
    if (c == ' ') {
      ++blank;
    };
    if (c == '\t') {
      ++tab;
    };
  };

  printf("Newlines: ");
  printf("%d\n", nl);

  printf("Tabs: ");
  printf("%d\n", nl);

  printf("Blanks: ");
  printf("%d\n", nl);
}
