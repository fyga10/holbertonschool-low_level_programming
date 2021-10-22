#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: counter
 * @argv: array
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
int i = 0;
while (i < argc)
{
i++;
}
_putchar (48 + (i - 1));
_putchar (10);
return (0);
}
