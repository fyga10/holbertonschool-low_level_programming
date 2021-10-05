# include <stdio.h>

/**
 *
 *main - hexadecimal
 *
 *Return: always 0 (success)
 *
 */

int main(void)
{
int a;
int b;

 for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
 for (b = 97; b <= 102; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
