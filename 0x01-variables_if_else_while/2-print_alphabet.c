#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
int c = 97;
while (c <= 122)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
