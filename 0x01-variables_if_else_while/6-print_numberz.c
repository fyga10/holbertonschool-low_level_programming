# include <stdio.h>

/**
 * main - prints numbers
 *
 *Return: always 0 (success)
 */
int main(void)
{
int a = 0;
while (a < '10')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
