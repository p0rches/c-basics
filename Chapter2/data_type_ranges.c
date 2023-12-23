#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  printf("#################### CHAR ####################\n");
  printf("CHAR_BIT      = %d\n", CHAR_BIT);
  printf("SCHAR_MAX     = %d\n", SCHAR_MAX);
  printf("SCHAR_MIN     = %d\n", SCHAR_MIN);
  printf("UCHAR_MAX     = %d\n", UCHAR_MAX);
  printf("\n");

  printf("#################### INT ####################\n");
  printf("UINT_MAX      = %u\n", UINT_MAX);
  printf("INT_MAX       = %d\n", INT_MAX);
  printf("INT_MIN       = %d\n", INT_MIN);
  printf("\n");

  printf("#################### SHORT INT ####################\n");
  printf("USHRT_MAX     = %u\n", USHRT_MAX);
  printf("SHRT_MAX      = %d\n", SHRT_MAX);
  printf("SHRT_MIN      = %d\n", SHRT_MIN);
  printf("\n");

  printf("#################### LONG INT ####################\n");
  printf("ULONG_MAX     = %lu\n", ULONG_MAX);
  printf("LONG_MAX      = %ld\n", LONG_MAX);
  printf("LONG_MIN      = %ld\n", LONG_MIN);
  printf("\n");

  printf("#################### LONG LONG INT ####################\n");
  printf("ULLONG_MAX     = %llu\n", ULLONG_MAX);
  printf("LLONG_MAX      = %lld\n", LLONG_MAX);
  printf("LLONG_MIN      = %lld\n", LLONG_MIN);
  printf("\n");

  printf("#################### FLOAT ####################\n");
  printf("FLT_MAX       = %f\n", FLT_MAX);
  printf("FLT_MIN       = %f\n", FLT_MIN);
  printf("\n");

  return 0;
}
