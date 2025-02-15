/* Prints Celsius-Fahrenheit table */
#include <stdio.h>

int
main (void)
{
  int lower = 0;
  int upper = 400;
  int step = 20;
  float celsius = lower;
  float fahrenheit;

  printf ("Celsius\t\tFahrenheit\n");

  while (celsius <= upper)
    {
      fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
      printf ("%3.0f\t\t%6.1f\n", celsius, fahrenheit);
      celsius += step;
    }

  return 0;
}
