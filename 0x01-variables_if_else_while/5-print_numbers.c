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
		printf("%d", base10);
		base10++;
	}
	printf("\n");
	return (0);
}
