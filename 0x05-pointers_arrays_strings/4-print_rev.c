#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		/*nothing happening here, just calculating len*/
	}

	/* print string reversed */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
