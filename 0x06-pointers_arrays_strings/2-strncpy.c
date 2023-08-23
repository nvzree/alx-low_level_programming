#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	return (len);
}

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

	for (i = 0;  i < n && i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
