#include <stdio.h>
#include <stdlib.h>

int my_getline(char **line);
void copy(char **to, char *from); // Change parameter from char** to char*

int main() {
  int len;
  int max = 0;
  char *line = NULL;
  char *longest = NULL;

  while ((len = my_getline(&line)) > 0)
    if (len > max) {
      max = len;
      if (longest) {
        free(longest); // Free previously allocated memory
      }
      longest =
          (char *)malloc(len * sizeof(char)); // Allocate memory for longest
      copy(&longest, line); // Pass the line directly (not a reference to it)
    }

  if (max > 0)
    printf("%s", longest);

  free(line);
  free(longest);

  return 0;
}

int my_getline(char **s) {
  int c, i;
  int lim = 2;

  *s = (char *)malloc(lim * sizeof(char));

  if (!(*s)) {
    fprintf(stderr, "Memory Allocation Error\n");
    exit(EXIT_FAILURE);
  }

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i >= lim - 1) {
      lim *= 2;
      *s = (char *)realloc(*s, lim * sizeof(char));

      if (!(*s)) {
        fprintf(stderr, "Memory Allocation Error\n");
        exit(EXIT_FAILURE);
      }
    }
    (*s)[i] = c;
  }

  if (c == '\n') {
    (*s)[i] = c;
    ++i;
  }

  (*s)[i] = '\0';
  return i;
}

void copy(char **to, char *from) { // Change parameter from char** to char*
  int i = 0;

  while (from[i] != '\0') {
    (*to)[i] = from[i];
    ++i;
  }
  (*to)[i] = '\0';
}
