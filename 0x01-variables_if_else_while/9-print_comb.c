# include <stdio.h>

/**
 * main - combinations
 *
 *Return: always 0 (success)
 */

int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
