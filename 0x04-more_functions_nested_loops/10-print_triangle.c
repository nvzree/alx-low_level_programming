#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int l;
	int b;
	int draw;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (b = 1; b <= (size - l); b++)
			{
				_putchar(' ');
			}
			for (draw = 1; draw <= l; draw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
