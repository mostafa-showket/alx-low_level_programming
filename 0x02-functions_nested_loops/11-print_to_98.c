#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the natural numbers
 * @n: integeral argument from which the program will start
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				_putchar(n);
			else
				printf("%d,", n);
			n++;
		}
	} else if (n == 98)
	{
		printf("%d", n);
	} else
	{
		while (n >= 98)
		{
			if (n == 98)
				_putchar(n)
			else
				printf("%d, ", n);
			n--;
		}
	}
}
