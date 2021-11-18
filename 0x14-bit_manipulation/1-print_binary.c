#include "main.h"

/**
 * print_binary - prints a unsigned
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 4611686018427387904;
	int s = 0, i;

	for (i = 63; i > 0; i--)
	{
		if (((a & n) == a) && s == 0)
			s = 1;

		if (s == 1)
		{
			if (a == (a & n))
				_putchar(49);
			else
				_putchar(48);
		}
		a = a >> 1;
	}
	if (s == 0)
		putchar(48);
}
