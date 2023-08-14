#include <stdio.h>

/**
 * main - Entry point
 * Numbers must be separated by , followed by a space
 *The two digits must be different
 *01 and 10 are considered the same combination of the two digits 0 and 1
 *Print only the smallest combination of two digits
 *Numbers should be printed in ascending order, with two digits
 *You can only use putchar five times maximum in your code
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9')
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
