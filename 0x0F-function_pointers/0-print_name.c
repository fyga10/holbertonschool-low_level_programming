#include "function_pointers.h"
/**
 * print_name - Prints the name passed
 * @name: The name
 * @f: The function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
