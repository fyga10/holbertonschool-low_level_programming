#include "main.h"

/**
 * puts2 - other
 * @str: character
 */

void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x = x + 2)
_putchar(str[x]);
_putchar('\n');
}
