#include <stdio.h>

/**
 * main - Fizz
 *
 *Return: 0
 */

int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 15 != 0)
{
printf("Fizz ");
}
else if (x % 5 == 0 && x % 15 != 0)
{
printf("Buzz ");
}
else if (x % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", x);
}
}
return (0);
}
