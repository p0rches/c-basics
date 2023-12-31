#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * using floating point arithmetic*/

/*
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%3s \t %6s \n","Fahr","Celsius");

  while (fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f \t %6.1f \n",fahr,celsius);
    fahr = fahr + step;
  }
}
*/

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  printf("%3s \t %6s \n", "Celsius", "Fahr");

  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f \t %6.1f \n", celsius, fahr);
    celsius = celsius + step;
  }
}
