#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - natural numbers
 * @x: Check
 *
 * Return: void
 */
void print_to_98(int x)
{
  int a, b;
if (x == 98)
{
_putchar(48 + (x / 10));
_putchar(48 + (x % 10));
_putchar(32);
}
else if (x < 98)
{
for (a = x; a <= 98; a++)
{
if(a < 10)
{
_putchar(48 + a);
}
else
{
_putchar(48 + (a / 10));
_putchar(48 + (a % 10));
_putchar(44);
_putchar(32);
}
}
}
else
{
for(b = x; b >= 98; b--)
{
_putchar(48 + (b / 10));
_putchar(48 + (b % 10));
_putchar(44);
_putchar(32);
}
}
}
