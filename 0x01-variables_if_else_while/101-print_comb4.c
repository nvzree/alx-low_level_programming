#include <stdio.h>

/**
 * main - Entry point
 * Numbers must be separated by , followed by a space
 *The three digits must be different
 *Print only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *You can only use putchar six times maximum in your code
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
