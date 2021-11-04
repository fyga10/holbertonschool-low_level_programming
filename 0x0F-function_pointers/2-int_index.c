#include "function_pointers.h"
/**
 * int_index - Looks for number
 * @array: The array
 * @size: The size
 * @cmp: The function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, check;

	if (array && cmp && size > 0)
	{

		for (index = 0; index < size; index++)
		{
			check = cmp(array[index]);

			if (check)
				return (index);

		}
	}
	return (-1);
}
