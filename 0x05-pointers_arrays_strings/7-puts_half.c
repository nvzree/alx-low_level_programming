#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int len;
	int n;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	for (i = 0; i < len / 2; i++)
	{

		_putchar(str[len / 2 + i]);
	}
	_putchar('\n');

	n = str[len - 1];
	if (n % 2 != 0)
	{
		_putchar(n);
	}

	_putchar('\n');
}

