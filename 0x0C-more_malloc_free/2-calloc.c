#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *z = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size * sizeof(char));

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		*(z + i) = 0;

	return (z);

}
