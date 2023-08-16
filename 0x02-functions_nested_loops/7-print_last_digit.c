#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: character to check
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	else
		n = n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
