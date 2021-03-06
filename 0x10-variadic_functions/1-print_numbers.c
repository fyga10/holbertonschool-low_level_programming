#include "variadic_functions.h"
/**
 * print_numbers - Print number
 * @separator: Separator
 * @n: Number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int z;
if (n == 0)
{
printf("\n");
return;
}
va_start(nums, n);
for (z = 0; z < n; z++)
{
printf("%d", va_arg(nums, int));
if (z != n - 1 && separator != NULL)
printf("%s", separator);
if (z == n - 1)
printf("\n");
}
va_end(nums);
}
