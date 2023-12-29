#include <stdio.h>
#include <string.h>
/* Example Hexadecimal codes
 * ff0000
 * 008000
 * e3b9b9
 */
int hex_char_to_decimal(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  } else if (c >= 'A' && c <= 'F') {
    return 10 + (c - 'A');
  } else if (c >= 'a' && c <= 'f') {
    return 10 + (c - 'a');
  } else {
    return -1;
  }
}

int hex_string_to_decimal(const char *hex_string) {
  int result = 0;
  int base = 1;
  int start_index = 0;

  if (hex_string[0] == '0' && (hex_string[1] == 'x' || hex_string[1] == 'X')) {
    start_index = 2;
  }
  for (int i = strlen(hex_string) - 1; i >= start_index; i--) {
    int decimal_value = hex_char_to_decimal(hex_string[i]);

    if (decimal_value == -1) {
      // Invalid character in the hex_string
      printf("Error: Invalid hexadecimal character '%c'\n", hex_string[i]);
      return -1;
    }

    result += decimal_value * base;

    base *= 16;
  }

  return result;
}

int main() {
  const char hex_string[] = "0xff0000";

  int decimal_value = hex_string_to_decimal(hex_string);

  if (decimal_value != -1) {
    printf("Hexadecimal: %s\n", hex_string);
    printf("Decimal:     %d\n", decimal_value);
  }

  return 0;
}
