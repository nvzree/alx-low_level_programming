#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to char
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv = 0;
	int len;

	if (b == NULL)
		return (0);
	/* calculate the length of b*/
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	/* iterate through string binary and convert to integer */
	for (i = 0; b[i] != '\0' ; i++)
	{
		if (b[i] == '1')
			conv += (1 * (1 << (len - 1)));
		len--;
	}

	return (conv);
}
