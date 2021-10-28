#include "main.h"
#include <stdlib.h>

/**
 * array_range - integer array
 * @min: First value
 * @max: Last value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *x, y, z = 0;
if (min > max)
{
return (NULL);
}
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (y = min; y <= max; y++)
	{
		*(x + z) = y;
		z++;
	}
	return (x);
}
