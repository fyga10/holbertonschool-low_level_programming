#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;
  int y;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  y=n%10;
  if (y > 5)
    {
      printf("%d Last digit of",n "is", y "and is greater than 5\n");
    }
  else if (y == 0)
    {
      printf("%d Last digit of", n "is", y "and is 0\n");
    }
  else if (y!=0 & y<6 ) 
    {
      printf("%d Last digit of",n "is", y "and is less than 6 and not 0");
    }
  return (0);
 }
