#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
  int a = 97;

  while (a < 123)
    {
      putchar(a);
      a++;
    }
  putchar('\n');
  return (0);
}
