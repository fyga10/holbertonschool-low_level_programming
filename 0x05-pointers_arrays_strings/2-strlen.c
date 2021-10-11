#include "main.h"

/**
 * _strlen - return length
 * @s: character
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}
