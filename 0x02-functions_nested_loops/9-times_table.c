#include "main.h"

/**
 * times_table - prints the times table
 *
 * Description: prints the times tables from 0 to 9
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			result = i * j;
			_putchar('0' + result);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
