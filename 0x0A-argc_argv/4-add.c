#include <stdio.h>
#include <stdlib.h>
/**
 * main - add
 * @argv: arguments
 * @argc: numbers of arguments
 * Return: 1
 */


int main(int argc, char *argv[])
{
int i, j = 0, sum;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
{
printf("%d\n", 0);
}
return (0);
}
