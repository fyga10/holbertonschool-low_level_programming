#include "3-calc.h"
int (*get_op_func(char *s))(int, int);
/**
 * main - main funtion
 * @argc: argument
 * @argv: argument
 * Return: int
 */
int main(int argc, char *argv[])
{
char *operator = argv[2];
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
get_op_func(operator)(num1, num2);
return (0);
}
