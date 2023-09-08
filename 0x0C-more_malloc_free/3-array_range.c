#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int range = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		arr[i] = min++;

	return (arr);
}
