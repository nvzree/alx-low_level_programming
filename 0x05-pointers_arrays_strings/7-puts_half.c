#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	for (i = 0; i < len ; i++)
	{

		_putchar(str[len / 2 + i]);
	}
	_putchar('\n');

}

