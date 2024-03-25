#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to find initial matching segment
 * @accept :set of characters against which to match
 * Return: number of bytes in initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				break; /* exit inner loop on a match */
			}
		}

		/* if no match is found, exit the outer loop */
		if (accept[j] == '\0' && s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
