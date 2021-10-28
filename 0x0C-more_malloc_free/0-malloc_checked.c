#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
	{
		free(z);
		exit(98);
	}

	return (z);

}
