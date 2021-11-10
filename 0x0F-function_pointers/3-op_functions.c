#include "3-calc.h"

int op_add(int a, int b)
{
printf("%d\n", a + b);
return (0);
}
int op_sub(int a, int b)
{
printf("%d\n", a - b);
return (0);
}
int op_mul(int a, int b)
{
printf("%d\n", a * b);
return (0);
}
int op_div(int a, int b)
{
printf("%d\n", a / b);
return (0);
}
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