#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: character to check
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: character to check
 * Return: 1 if n greater than 0, 0 if n is 0, -1 if n is less than zer    o
 */
int print_sign(int n);

/**
 *int _abs - computes absolute value of an integer
 *@n: integer value
 *Returns: absolute value
 */
int _abs(int n);


/**
 * print_last_digit - prints last digit of a number
 * @n: character to check
 * Return: returns the value of the last digit
 */
int print_last_digit(int n);

/**
 * jack_bauer - prints every minutes of the day, from 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - pritns the 9 times table
 */
void times_table(void);

#endif
