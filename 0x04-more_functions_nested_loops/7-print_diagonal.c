#include "main.h"

/**
 * print_diagonal - line
 * @n: number of _
 */

void print_diagonal(int n)
{
int x, y, z;
if (n > 0)
{
for (x = 0; x < n; x++)
{
if (x > 0)
{
for (y = x; y <= x; y++)
{
for (z = 0; z <= (x-1); z++)
{
_putchar (32);
}
}
}
_putchar (92);
_putchar (10);
}
}
else
{
_putchar (10);
}
}
