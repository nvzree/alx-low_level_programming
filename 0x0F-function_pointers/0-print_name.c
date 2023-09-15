#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
