/* Prints Fahrenheit-Celsius table */
#include <stdio.h>

int
main (void)
{
  int lower = 0;
  int upper = 400;
  int step = 20;
  float fahrenheit = lower;
  float celsius;

  /* Printing the heading */
  printf ("Fahrenheit\tCelsius\n");

  while (fahrenheit <= upper)
    {
      celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
      printf ("%3.0f\t\t%6.1f\n", fahrenheit, celsius);
      fahrenheit += step;
    }

  return 0;
}
