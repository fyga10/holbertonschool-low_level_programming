#include "main.h"

/**
 * print_alphabet_x10 - alphabet por 10
 *
 *Return: 1
 */
void print_alphabet_x10(void)
{
int i;
int a;
for (i = 0; i <= 9; i++)
{
for (a = 97; a < 123; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
