#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: check
 */

void print_chessboard(char (*a)[8])
{
int y = 0, z = 0;
while (y < 8)
{
for (z = 0; z < 8; z++)
{
_putchar(a[y][z]);
}
y++;
_putchar(10);
}
}
