#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	n = len / 2;
	if ((len % 2) != 0)
		n = (len + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

