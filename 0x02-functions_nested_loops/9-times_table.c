#include "main.h"

/**
 * times_table - pritns the 9 times table
 */

void times_table(void)
{
	int row;
	int column;
	int x;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			x = row * column;
			if (column == 0)
			{
				_putchar('0' + x);
			}
			else if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}

		}
		_putchar('\n');
	}
}
