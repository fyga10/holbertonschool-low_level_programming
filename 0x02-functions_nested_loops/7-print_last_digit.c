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
c = (r % 10);
if (c < 0)
{
c = -c;
}
_putchar(48 + c);
return (c);
}
