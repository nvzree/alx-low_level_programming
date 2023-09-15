#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter 
 * on each element of an array
 * @size: size of the array
 * @array: array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
