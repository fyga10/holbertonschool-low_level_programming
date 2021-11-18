#include "main.h"
/**
 * binary_to_uint - returns and unsigned int from a char binary array
 * @b: The char with 1 and 0's to ve converted
 * Return: The unsigned int number in decimal base
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		num <<= 1;
		num += b[index] - '0';
	}
	return (num);
}
