#include "main.h"

/**
 * print_array - print array
 * @a: pointer
 * @n: integer
 */

void print_array(int *a, int n)
{
int x = 0;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x < n-1)
{
printf(", ");
}
}
printf("\n");
}
