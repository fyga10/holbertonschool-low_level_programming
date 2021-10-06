#include "main.h"

/**
 *times_table - tables
 *
 *Return: void
 */

void times_table(void)
{
int i, x, y;
for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 9; x++)
{
y = (x * i);
if(y < 10)
{
if(y < 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(y + 48);
}
else
{
_putchar(44);
_putchar(32);
_putchar('0' + (y / 10));
_putchar('0' + (y % 10));
}
}
_putchar(10);
}
}
