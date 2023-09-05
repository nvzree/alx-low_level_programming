#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * which contains duplicate of str
 * @str: pointer to char
 * Return: returns a pointer to the duplicated string
 * or NULL if insufficient memory was available.\
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL) /* validate str input */
		return (NULL);

	s = malloc((strlen(str) + 1) * sizeof(char));

	if (s == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < (int)strlen(str); i++)
	{
		s[i] = str[i];
	}
	s[strlen(str)] = '\0'; /* add null terminator */

	return (s);
}
