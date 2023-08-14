#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int x1;
	int y1;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (x1 = x; x1 <= '9'; x1++)
			{
				for (y1 = y + 1; y1 <= '9'; y1++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(x1);
					putchar(y1);

					if (!((x == '9' && y == '8') && (x1 == '9' && y1 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
