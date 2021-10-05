#include "main.h"

/**
 *print_sign - sign of a number
 *
 *@c: check sign
 *Return: 0, 1 or -1
 */

int print_sign(int n)
{
if (n > 0)
{
return(1);
_putchar('+1');
}
else if (n == 0)
{
return(0);
_putchar('00');
}
else
{
return(-1);
_putchar('-1');
}
}
