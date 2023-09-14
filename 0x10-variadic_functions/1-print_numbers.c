#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints arguments
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s ", separator);
	}

	va_end(ap);

	putchar('\n');
}
