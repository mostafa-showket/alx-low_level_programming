#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 t0 14
 * 
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 10, j;

	while (i--)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
