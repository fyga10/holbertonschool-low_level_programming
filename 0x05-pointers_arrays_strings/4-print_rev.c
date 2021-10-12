#include "main.h"

/**
 * print_rev - reverse
 * @s: character
 *
 */

void print_rev(char *s)
{
int legth = 0;
int last = 0;
while (s[legth] != '\0')
{
legth++;
}
last = legth - 1;
while (s[last] != '\0')
{
_putchar(s[last]);
last--;
}
_putchar('\n');
}
