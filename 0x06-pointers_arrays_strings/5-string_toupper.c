#include "main.h"

/**
 * string_toupper - lowercase
 * @a: pointer
 * Return: a
 */

char *string_toupper(char *a)
{
int x = 0;
while (a[x] != '\0')
{
if (a[x] >= 97 && a[x] <= 122)
{
a[x] = a[x] - 32;
}
x++;
}
return (a);
}
