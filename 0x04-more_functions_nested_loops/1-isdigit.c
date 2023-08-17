#include "main.h"

/**
 * _isdigit(int c) - checks for a digit (0 through 9)
 * @c: integer character
 * Return: 1 if @c is a digit, 0 if other wise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
