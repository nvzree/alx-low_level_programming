#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of size bytes
 * @size: size of array
 * Return: returns pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		((char *)arr)[i] = 0;
	}
	return (arr);
}
