#include "main.h"

/**
 * print_line - draws a straight
 * @n: number of times character be printed
 */

void print_line(int n)
{
	char line;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
