#include "main.h"

/**
 * puts_half - second half
 * @str: character
 *
 */

void puts_half(char *str)
{
int y, x;
int leng = 0;
while (str[leng] != '\0')
{
leng++;
}
y = leng;
if (y % 2 == 0)
{
for (x = (y / 2); str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar(10);
}
else
{
for (x = (((y - 1) / 2) + 1); str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar(10);
}
}
