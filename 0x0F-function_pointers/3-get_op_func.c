#include "3-calc.h"
{
int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
printf("Error\n");
exit(99);
}
