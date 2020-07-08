/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int l1, i = 0;
  int m, k;
  char b[MAX], c[MAX];

  int n = strlen (s);

  for ( i = 0 ; i < n ; ++i )
  {
    ++l1;

    if (s[i+1] == ' ')
    i = n;
  }

  for ( i = 0 ; i <= l1 ; ++i )
  b[i] = s[i];

  m = strlen (b);

  k = n - m;

  for ( i = (n-1) ; i >= k ; --i)
  c[i] = s[i];

  for ( i = 0 ; i <= l1 ; ++i )
  {
    if (b[i] >= 97)
    b[i] = b[i] - 32;
  }
  
  b[m+1] = ',';

  for ( i = 0 ; i <= k ; ++i )
    s[i] = c[i];

  for ( i = k + 1 ; i <= n + 1 ; ++i )
    s[i] = b[i - (k+1)];

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
