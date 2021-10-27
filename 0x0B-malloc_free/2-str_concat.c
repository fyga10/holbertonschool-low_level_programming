#include <stdlib.h>
#include "main.h"
/**
 * _strlen - The length of a string
 * @s: Check the string
 * Return: Always 0
 */
int _strlen(char *s)
{
int leng = 0;
while (s[leng] != '\0')
{
leng++;
}
return (leng);
}
/**
 * str_concat - Concatenate.
 * @s1: first string
 * @s2: second string
 * Return: dest
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int len1, len2, a, j;
if (s1 == NULL)
{
s1 = "";
}
len1 = _strlen(s1);
if (s2 == NULL)
{
s2 = "";
}
len2 = _strlen(s2);
s = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
a = 0;
while (s1[a] != '\0')
{
s[a] = s1[a];
a++;
}
j = 0;
while (s2[j] != '\0')
{
s[a + j] = s2[j];
j++;
}
s[a + j] = s2[j];
return (s);
}
