#include "function_pointers.h"

/**
 * array_iterator - Execute a function
 * @array: array
 * @size: The array's size
 * @action: The function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array && action)
	{
		for (z = 0; z < size; z++)
		{
			action(array[z]);
		}
	}

}
