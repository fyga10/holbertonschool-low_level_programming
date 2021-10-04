#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
int a = 97;
int b = 65;
while (a < 123)
{
putchar(a);
a++;
}
while (b <= 90)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
