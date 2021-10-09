#include "main.h"

/**
 * print_most_numbers - numbers
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a != 2 && a != 4)
{
_putchar(48 + a);
}
}
_putchar('\n');
}
