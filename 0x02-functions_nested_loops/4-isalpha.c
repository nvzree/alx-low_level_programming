#include "main.h"


/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: character to check
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
