#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* check first character is lowercase alphabet */
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}

		/* check for seperators*/
		if (
		s[i] == ' ' || s[i] == '.' || s[i] == ',' ||
		s[i] == '\n' || s[i] == '\t' || s[i] == ';' ||
		s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			/* if found check next character*/
			/* check if next charcter is lowercase*/
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
