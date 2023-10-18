#include "main.h"

/**
 * print_last_digit - prints last digit of given integer
 * @n: integer argument
 *
 * Return: the last digit of given integer
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	_putchar('0' + (n % 10));
	return (n % 10);
}
