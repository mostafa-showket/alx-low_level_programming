#include "main.h"

/**
* reverse_array - reverse array of integers
* @a: array
* @n: number of elements of array
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
