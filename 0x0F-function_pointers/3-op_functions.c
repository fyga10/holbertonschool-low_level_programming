#include "3-calc.h"
/**
 * op_add - addition
 * op_mod - module
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_add(int a, int b)
{
printf("%d\n", a + b);
return (0);
}
/**
 * op_sub - subtration
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_sub(int a, int b)
{
printf("%d\n", a - b);
return (0);
}
/**
 * op_mul - multiplication
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_mul(int a, int b)
{
printf("%d\n", a * b);
return (0);
}
/**
 * op_div - division
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_div(int a, int b)
{
printf("%d\n", a / b);
return (0);
}
/**
 * op_mod - module
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", a % b);
return (0);
}
