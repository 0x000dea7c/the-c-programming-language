#include <stdio.h>

int
main (void)
{
  /*
   * Try characters that aren't:
   *
   * \a \b \f \n \r \t \v
   *
   * These ones are defined and explained in Section 2.3.
   *
   */

  /* printf ("1 test: \l\n"); */
  /* printf ("2 test: \g\n"); */
  /* printf ("3 test: \c\n"); */
  /* printf ("4 test: \m\n"); */

  /* This fails to compile with the error: unknown espace
   * sequence. It's good that this is detected at compile time */

  return 0;
}
