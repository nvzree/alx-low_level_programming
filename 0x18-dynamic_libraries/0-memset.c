#include "main.h"

/**
 * _memset - fills n bytes of memory with a constant byte
 * @s: pointer to char to start mem block
 * @b: the value to be set
 * @n: number of bytes to be set
 * Return: pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
