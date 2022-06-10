#include "search_algos.h"
#include <math.h>
/**
 * print_array - section of an array
 *
 * @array: pointer
 * @index_f: Index of the array
 * @index_l: Last index
 */
void print_array(int *array, size_t index_f, size_t index_l)
{
	size_t i;

	printf("Searching in array: ");
	for (i = index_f; i < index_l; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[index_l]);
}

/**
 * binary_search - binary search algorith
 *
 * @array: pointer
 * @size: elements inside the array
 * @value: Value inside the array
 * Return: Index location of value inside
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index_f = 0, index_l = size - 1, middle;

	if (array == NULL)
		return (-1);
	print_array(array, index_f, index_l);
	while (index_f <= index_l)
	{
		middle = index_f + (index_l - index_f) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			index_f = middle + 1;
		else
			index_l = middle - 1;
		if (index_f <= index_l)
			print_array(array, index_f, index_l);
	}
	return (-1);
}
