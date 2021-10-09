#include "main.h"

/**
 * print_square - square
 * @size: size
 */

void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
_putchar (35);
for (b = 1; b < size; b++)
{
_putchar (35);
}
_putchar (10);
}
}
else
{
_putchar(10);
}
}
