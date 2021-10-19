#include "main.h"

/**
 * _strstr - searche
 * @haystack: character 1
 * @needle: character 2
 * Return: s or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int a, b;
for (a = 0; needle[a] != '\0'; a++)
{
for (b = 0; haystack[b] != '\0'; b++)
{
if (haystack[b] == needle[a])
{
return (&needle[a]);
}
}
}
return (0);
}