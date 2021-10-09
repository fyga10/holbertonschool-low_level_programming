#include "main.h"

/**
 * more_numbers - numbers
 *
 */

void more_numbers(void)
{
int c, x;
for (x = 0; x <= 10; x++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
{
_putchar (48 + c / 10);
}
_putchar(48 + c % 10);
}
_putchar(10);
}
}
