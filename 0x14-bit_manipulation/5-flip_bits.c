#include "main.h"
/**
 * flip_bits - Counts how much bits needed ti flip one number to other
 * @n: First number
 * @m: Second Number
 * Return: The amount of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, bin, bim;

	while (n > 0 || m > 0)
	{
		bin = (n & 1);
		bim = (m & 1);
		if (bim != bin)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
