#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size to allocate to array
 * @c: char to initialize with
 * Return: returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
