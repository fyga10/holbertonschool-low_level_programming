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
if ( r == 2147483647) {
c = 8;
}
_putchar('0' + c);
return (c);
}
