#include "main.h"

/**
 * *cap_string - Capitalize
 * @s: string
 * Return: 0
 */
char *cap_string(char *s)
{
int b;
int c;
char a[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t',
'\n'};
for (b = 0; s[b] != '\0'; b++)
{
for (c = 0; a[c] != '\0'; c++)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
if (s[b] == a[c] && s[b + 1] >= 'a' && s[b + 1] <= 'z')
{
s[b + 1] = s[b + 1] - 32;
}
}
}
return (s);
}
