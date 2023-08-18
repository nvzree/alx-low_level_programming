#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character '\' be printed
 */

void print_diagonal(int n)
{
	int s;
	int d;

	if (n > 0)
	{
		for (d = 1; d <= n; d++)
		{
			for (s = 1; s <= d; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
