#include "main.h"

/**
 * print_sign - prints the sign of given number
 * @n: integer argument
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	} else if (n == 0)
	{
		_putchar('0');
		i = 0;
	} else
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
