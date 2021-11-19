#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int checker = 1;

	if ((checker << 1) == 0)
		return (0);
	else
		return (1);
}