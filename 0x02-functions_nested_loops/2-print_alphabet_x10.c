#include "main.h"

/**
 * print_alphabet_x10
 *
 *Return: 1
 */
void print_alphabet_x10(void)
{
int i
int a = 97
for (i = 0; i <= 9; i++)
{
while (a<128)
{
_putchar(a); 
a++;
}
_putchar('\n');
}
}
