/**
 * aux - funtion auxiliar
 *
 * @n: number
 * @a: acumulator
 *
 * Return: a, the value of the sqrt
 */

int aux(int n, int a)
{
if (a * a == n)
{
return (a);
}
if (a * a < n)
{
return (aux(n, ++a));
}
if (a * a > n || n < 0)
{
return (-1);
}
return (-1);
}

#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: -1
 */

int _sqrt_recursion(int n)
{
return (aux(n, 1));
}

