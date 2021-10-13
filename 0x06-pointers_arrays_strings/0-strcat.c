#include "main.h"

/**
 * *_strcat - concatenates
 * @dest: destiny
 * @src: recurso
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a = 0, b = 0;
while (dest[b] != '\0')
{
b++;
}
while (src[a] != '\0')
{
dest[b + a] = src[a];
a++;
}
src[a] = '\0';
return (dest);
}
