#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of time \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int c)
{
	int i, j;

	if (c > 0)
		for (i = 0; i < c; i++)
		{
			for (j = 0;j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
}
