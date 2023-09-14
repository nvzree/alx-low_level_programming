#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: int sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n); /*initializing argument pointer*/

	sum = 0;
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
