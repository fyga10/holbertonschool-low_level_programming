#include "main.h"

/**
 * jack_bauer - minutes of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
int i;
int x;
for (i = 0; i <= 23; i++)
{
for (x = 0; x <= 59; x++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(58);
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(10);
}
}
}
