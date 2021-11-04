#include "variadic_functions.h"
/**
 * print_strings - print
 * @separator: string
 * @n: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int z;
	char *str;

	va_start(lista, n);

	for (z = 0; z < n; z++)
	{
		str = va_arg(lista, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && z < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lista);
}
