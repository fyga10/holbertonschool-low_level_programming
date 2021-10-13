#include "main.h"

/**
 * *_strcpy - copy
 * @dest: destination
 * @src: character
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

int x = 0;
while (src[x])
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';
return (dest);
}
