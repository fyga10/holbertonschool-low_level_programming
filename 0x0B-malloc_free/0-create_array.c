#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create a array object
 * @size: size of the array
 * @c: first character of the array
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b = 0;
a = malloc(sizeof(char) * size);
if (a == NULL)
{
return (NULL);
}
while (b < size)
{
a[b] = c;
b++;
}
if (size == 0)
{
return (NULL);
}
return (a);
}
