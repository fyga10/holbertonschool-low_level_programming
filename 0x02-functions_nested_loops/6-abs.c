#include "main.h"
#include <stdio.h>

/**
 *_abs - absolute value
 *@r: number
 *Return: always 0
 */

int _abs(int r)
{
int c;
if (r < 0)
{
c = (r * (-1));
}
else
{
c = r;
}
return (c);
}
