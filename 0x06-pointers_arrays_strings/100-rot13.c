#include "main.h"

/**
 * rot13 - function that encodes a string
 * @s: pointer to string
 * Return: string
 */

char *rot13(char *s)
{
	int a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		     'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		     'W', 'X', 'Y', 'Z'};
	int b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		     'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		     'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};

	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (a[i] != '\0' && s[j] != a[i]) /*loop through array*/
			i++;

		if (s[j] == a[i]) /*if alpha matches*/
			s[j] = b[i];
	}
	return (s);
}



/**
*  char rot13(char s) - k
*{
*	int i;
*
*	for (i = 0; s[i] != '\0'; i++)
*	{
*		if (s[i] >= 'a' && s[i] <= 'z')
*		{
*			s[i] = ((s[i] - 'a' + 13) % 26 + 'a');
*		}
*		else if (s[i] >= 'A' && s[i] <= 'Z')
*		{
*			s[i] = ((s[i] - 'A' + 13) % 26 + 'A');
*		}
*	}
*	return (s);
*}
 */
