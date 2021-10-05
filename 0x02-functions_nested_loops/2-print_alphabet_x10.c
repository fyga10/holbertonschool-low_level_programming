#include "main.h"

/**
 * print_alphabet_x10
 *
 *Return: 1
 */
void print_alphabet_x10(void)
{
int i;
int a;
for (i = 0; i <= 9; i++)
{
for (a = 123; a > 96; a--)
{
_putchar(a); 
}
}
_putchar('\n');
}
