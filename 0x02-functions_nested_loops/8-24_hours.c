#include "main.h"

/**
 * jack_bauer - prints every minutes of the day, from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours;
	int mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
		}
	}
}
