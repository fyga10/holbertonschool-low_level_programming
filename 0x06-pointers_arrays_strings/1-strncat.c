#include "main.h"

/**
 * *_strncat - concatenates
 * @dest: destiny
 * @src: resource
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
