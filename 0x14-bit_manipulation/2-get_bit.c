#include "main.h"

/**
 * get_bit - Checks
 * @n: number
 * @index: index to check
 * Return: bit if found or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 63)
		return (-1);

	if (((a << index) & n) == (a << index))
		return (1);
	else
		return (0);
}
