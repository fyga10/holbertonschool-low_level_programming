#include "main.h"

/**
 * _puts - print a string
 * @str: character
 * Return: length
 */

void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar(10); 
}
