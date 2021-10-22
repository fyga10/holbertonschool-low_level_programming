#include "main.h"

/**
 * main - prints the name of the executable
 * @argc: counter
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
int i = 0;
int j = 0;
for (i = 0; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
_putchar(argv[i][j++]);
}
}
_putchar (10);
return (0);
}
