#include "main.h"

/**
 * print_triangle - Triangle
 *@size: int
 *
 */
void print_triangle(int size)
{
int x;
int y;

if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = x; y <= size - 1; y++)
{
_putchar(32);
}
for (y = 1; y <= x; y++)
{
_putchar(35);
}
_putchar(10);
}

}
else
{
_putchar(10);
}
}
