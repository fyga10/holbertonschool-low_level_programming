#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - natural numbers
 * @x: Check
 *
 * Return: void
 */
void print_to_98(int x)
{
int a;
if (x < 98)
{
for (a = x; a <= 97; a++)
printf("%i, ", a);
}
else
{
for (a = x; a > 98; a--)
printf("%i, ", a);
}
printf("98\n");
}
