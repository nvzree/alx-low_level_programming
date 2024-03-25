#include "main.h"

/**
 * _memcpy - copies n btyes of memory area
 * @dest: memory destination to copy to
 * @src: memory source to copy from
 * @n: size of byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
