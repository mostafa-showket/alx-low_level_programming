#include "main.h"

/**
 * print_above_9 - prints the result above 9
 * @result: integer argument to be printed
 *
 * Description: prints the result above 9
 */

void print_above_9(int result)
{
	_putchar('0' + (result / 10));
	_putchar('0' + (result % 10));
}

/**
 * print_times_table - prints the times table of n
 * @n: integer argument of the number to print its times table
 *
 * Description: prints the time table of given integer n
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0' + result);
			} else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			} else if (result > 10 || result < 100)
			{
				_putchar(',');
				_putchar(' ');
				print_above_9(result);
			} else if (result >= 100)
			{
				_putchar('0' + (result / 100));
				print_above_9(result);
			} else if (j == n)
			{
				if (result > 10 || result < 100)
				{
					print_above_9(result);
				} else if (result > 100)
				{
					_putchar('0' + (result / 100));
					print_above_9(result);
				}
			}
		}
		_putchar('\n');
	}
}
