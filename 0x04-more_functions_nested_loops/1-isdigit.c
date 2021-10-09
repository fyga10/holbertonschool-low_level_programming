#include "main.h"

/**
 * _isdigit - check digit
 * @c: digit
 * Return: 1 is digit or 0
 */

int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}
