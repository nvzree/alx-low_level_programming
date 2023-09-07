#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of byte
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
