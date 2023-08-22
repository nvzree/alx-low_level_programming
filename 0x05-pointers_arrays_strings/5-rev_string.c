#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int len;
	int tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
		/*nothing happening here, just calculating len*/
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}

}
