#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer
 * @b: character
 * @n: integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x <= n; x++)
{
s[x] = b;
}
return (s);
}
