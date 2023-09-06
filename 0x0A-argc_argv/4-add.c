#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: pointer array that points to arguments passed
 * Return: 0 ont success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0); /* Exit program*/
	}

	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				sum += atoi(argv[i]);
				break;/* exit inner loop when digit is found*/
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
