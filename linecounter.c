#include <stdio.h>

int main() {
  int current_char, previous_char;

  // Read the first character
  current_char = getchar();

  while (current_char != EOF) {
    // Print the character if it's not a space or if it's the first space in a
    // consecutive series
    if (current_char != ' ' || previous_char != ' ') {
      putchar(current_char);
    }

    // Store the current character as the previous character for the next
    // iteration
    previous_char = current_char;

    // Read the next character
    current_char = getchar();
  }

  return 0;
}
