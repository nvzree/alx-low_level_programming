#include "main.h"


/**
 * _strncpy - copies a string
 * @dest: string pointer to copy to
 * @src: string pointer to copy from
 * @n: maximum number of character to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;  i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
