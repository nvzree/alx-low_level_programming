#include "main.h"

/**
 * leet - encodes string
 *Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 * @s: pointer to string
 * Return: string
 */

char *leet(char *s)
{
	int lt[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int en[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lt[j] != '\0'; j++)
		{
			if (s[i] == lt[j])
				s[i] = en[j];
		}
	}
	return (s);
}
