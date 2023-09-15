#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string pointer
 * @f: function pointer to function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
