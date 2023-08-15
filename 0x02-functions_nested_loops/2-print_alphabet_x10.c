#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	counter = 1;
	while (counter <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		counter++;
	}
}
