#include "main.h"

/**
 * pritn_triangle - prints a triangle
 * @size: integer number indicates the size of the triangle
 *
 * Return: nothing*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
				_putchar(' ');
			for (k = 1; k <= i;k++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
