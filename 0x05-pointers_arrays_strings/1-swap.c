#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer character to swap
 * @b: integer character to swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
