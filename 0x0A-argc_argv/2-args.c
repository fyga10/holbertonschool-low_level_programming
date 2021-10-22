#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: counter
 * @argv: array
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char **argv)
{
for ( ; *argv; argv++)
{
printf("%s\n", *argv);
}
return (0);
}
