#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

/**int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}**/

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * @n: n bytes from src
 * @dest: append source string to this destination
 * @src: source string to append from
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
