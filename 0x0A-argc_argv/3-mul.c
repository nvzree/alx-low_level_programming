#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);

	return (0);
}
