#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of bytes
 * Return: pointer t0 char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_concat;
	unsigned int i;
	unsigned int len1 = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_concat = malloc(sizeof(char) * (len1 + n + 1));
	if (new_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_concat[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		new_concat[len1 + i] = s2[i];
	}

	new_concat[len1 + n] = '\0';
	return (new_concat);
}
