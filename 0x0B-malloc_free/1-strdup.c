#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length
 *@b: string
 *Return: c
 */

int _strlen(char *b)
{
int c = 0;
while (*b != '\0')
{
c++;
b++;
}
return (c);
}

/**
 * _strdup - Copies a string
 * @str: String
 * Return: returns a pointer or NULL
 */

char *_strdup(char *str)
{
char *copy;
int a;
if (str == NULL)
{
return (NULL);
}
copy = malloc(sizeof(char) * _strlen(str) + 1);
if (copy == NULL)
{
return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
{
copy[a] = str[a];
}
copy[a] = '\0';
return (copy);
}