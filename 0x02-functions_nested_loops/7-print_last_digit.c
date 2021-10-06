#include "main.h"

/**
 *print_last_digit - last digit
 *
 *@r: digit
 *Return: 0
 */

int print_last_digit(int r)
{
int c;
if (r < 0)
{
r = -r;
}
c = (r % 10);
_putchar(48 + c);
return (c);
}
