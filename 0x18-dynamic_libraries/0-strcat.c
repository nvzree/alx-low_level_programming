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
} **/

/**
 * _strcat - concatenates two strings
 * @dest: append source to this destination
 * @src: source to append from
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
