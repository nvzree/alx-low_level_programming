#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: pointer to integer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int row;
	int column;
	int sum = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		column = a[row * size + row];
		sum += column;
	}

	for (row = 1; row <= size; row++)
	{
		column = a[(row * size) - row];
		sum2 += column;

	}
	printf("%d, %d\n", sum, sum2);
}
