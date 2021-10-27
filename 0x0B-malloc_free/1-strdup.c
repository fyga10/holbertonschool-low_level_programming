#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copies a string
 * @str: The string
 * Return: The direction or NULL
 */

char *_strdup(char *str)
{
char *P;
int i;
if (str == NULL)
return (NULL);
P = malloc((length(str)) * sizeof(char));
if (P == NULL)
return (NULL);
for (i = 0; i < length(str); i++)
*(P + i) = *(str + i);
return (P);
}

/**
 * length - length of a string
 * @str: string
 * Return: length
 */

int length(char *str)
{
if (*(str) == '\0')
return (1);
else
return (1 + length(str + 1));
}
