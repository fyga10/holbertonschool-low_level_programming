# include <stdio.h>

/**
 * main - combinations
 *
 *Return: always 0 (success)
 */

int main(void)
{
int a;
int b;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (b != 0  && a != b && a != 9)
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
