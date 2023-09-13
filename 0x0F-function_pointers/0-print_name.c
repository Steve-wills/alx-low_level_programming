#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to be printed
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
