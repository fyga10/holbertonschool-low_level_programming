#include "main.h"

/**
 * reverse_array - Reverse
 *@a: pointer
 *@n: integer
 */

void reverse_array(int *a, int n)
{
int b, c, d;
for (b = 0, c = n - 1; b < c; b++)
{
d = a[b];
a[b] = a[c];
a[c] = d;
c--;
}
}
