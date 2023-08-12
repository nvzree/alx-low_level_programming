#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int base10;

	base10 = 0;
	while (base10 < 10)
	{
		putchar(base10 + '0');
		base10++;
	}
	putchar('\n');
	return (0);
}
