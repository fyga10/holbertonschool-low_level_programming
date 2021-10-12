#include "main.h"

/**
 * rev_string - reverse
 * @s: character
 *
 */
void rev_string(char *s)
{
int x = 0;
int y = 0;
int z;

while (s[x] != '\0')
{
x++;
}
x = x - 1;
while (y < x)
{
z = s[x];
s[x] = s[y];
s[y] = z;
y++;
x--;
}
}
