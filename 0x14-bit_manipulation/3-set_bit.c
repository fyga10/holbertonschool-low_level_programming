#include "main.h"

/**
 * set_bit - set number
 * @n: number is gonna be set in 1
 * @index: index to check
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 63)
		return (-1);

	*n |= (a << index);

	return (1);
}
