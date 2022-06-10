#ifndef SEARCHING
#define SEARCHING

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/*Linear Search*/
int linear_search(int *array, size_t size, int value);

/*Binary search*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int size);

/*Jump Search*/
int jump_search(int *array, size_t size, int value);

#endif /* SEARCHING */
