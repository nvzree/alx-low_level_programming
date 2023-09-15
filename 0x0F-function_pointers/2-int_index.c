#include "function_pointers.h"

/**
 * int_index - searches for integer element in an array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 * @array: array
 * Return: returns the index of first element for which cmp
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	/* if no element matches */
	return (-1);
}
