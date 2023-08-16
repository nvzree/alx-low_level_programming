#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: integer character
 */
void print_times_table(int n)
{
	int row;
	int column;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				x = row * column;
				if (column == 0)
					_putchar('0' + x);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (x <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + x);
					}
					else if (x > 9 && x < 100)
					{
						_putchar(' ');
						_putchar('0' + (x / 10));
						_putchar('0' + (x % 10));
					}
					else if (x >= 100)
					{
						_putchar('0' + (x / 100));
						_putchar('0' + ((x / 10) % 10));
						_putchar('0' + (x % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
