#include "main.h"

/**
 *times_table - tables
 *
 *Return: void
 */

void times_table(void)
{
int i, x;
for (i = 0; i <= 9; i++)
{
for(x =0; x <= 9; x++)
{
_putchar(x * i);
_putchar(44);
_putchar(32);
}
_putchar(10);
}
}
