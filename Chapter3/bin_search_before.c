#include <stdio.h>

#define MAX_LENGTH 1000

int binsearch(int x, int v[], int n);

int main() {
  int x = 11, v[MAX_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = 10;

  int result = binsearch(x, v, n);

  if (result != -1)
    printf("The input %d, is found at position %d in the array.\n", x, result);
  else
    printf("The input %d, is not found in the array.\n", x);

  return 0;
}

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }

  return -1;
}
