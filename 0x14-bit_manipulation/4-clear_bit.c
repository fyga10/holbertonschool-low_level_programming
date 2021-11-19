#include "main.h"
/**
 * clear_bit - Sets a bit of a number to 0
 * @n: The number whose bit is gonna be set in 0
 * @index: The index to check
 * Return: 1 if worked, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (-0 ^ *n) & (1 << index);
	return (1);
}
