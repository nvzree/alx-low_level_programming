#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string character
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
