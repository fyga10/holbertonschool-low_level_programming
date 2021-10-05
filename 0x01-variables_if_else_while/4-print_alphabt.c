#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
int b = 97;
while (b < 123)
{
if ((b != 101) && (b != 113))
{
putchar(b);
}
b++;
}
putchar('\n');
return (0);
}
