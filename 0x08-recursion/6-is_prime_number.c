#include "main.h"

/**
 * aux - Prints a prime number
 * @n: same number
 * @a: number aux
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int aux(int n, int a)
{
if (n <= 0 || n == 1)
{
return (0);
}
else if (n == a)
{
return (1);
}
else if (n % a == 0)
{
return (0);
}
else
{
return (aux(n, (a + 1)));
}
}

/**
 * is_prime_number - prime number
 * @n: check n
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
return (aux(n, 2));
}
