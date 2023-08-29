#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
