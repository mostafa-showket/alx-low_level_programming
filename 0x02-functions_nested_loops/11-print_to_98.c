#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the natural numbers
 * @n: integeral argument from which the program will start
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
