/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{

  int i = 0;

  int x;
  x = 0;

  for (i = 1; i <= a; ++i)
  {
    if (a % i == 0)
    {
      ++x;
    }
  }

  if ( x > 2 )
  {
    return 0;
  }
  else
  {
    if (x == 1 || x == 0)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
  
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
