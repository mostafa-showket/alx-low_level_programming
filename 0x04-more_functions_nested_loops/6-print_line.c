#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of times _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
