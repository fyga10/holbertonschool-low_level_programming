#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple
 * @argv: arguments
 * @argc: numbers of arguments
 * Return: 1
 */

int main(int argc, char **argv)
{
if (argc > 2)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("error\n");
return (1);
}
return (0);
}