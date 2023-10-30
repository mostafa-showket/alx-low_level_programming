#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
	{
		printf("%d", *a);
		for (; i < n; i++)
			printf(", %d", a[i]);
		printf("\n");
	}
}
