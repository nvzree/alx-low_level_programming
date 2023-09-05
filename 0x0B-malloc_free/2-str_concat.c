#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: pointer to string 1
 * @s2: pointer to string 2 to add to string 1
 * Return: newly allocated space in memory containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *new_concat;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_concat = malloc((len1 + len2 + 1) * sizeof(char)); /*alloc memory*/

	if (new_concat == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_concat[len1 + i] = s2[i];
	}
	new_concat[len1 + len2] = '\0';
	return (new_concat);
}
