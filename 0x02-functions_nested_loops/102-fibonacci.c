#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Description: prints the first 50 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int sum, n1 = 0, n2 = 1;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			sum = n1 + n2;
			printf("%ld", sum);
		} else
		{
			sum = n1 + n2;
			printf("%ld, ", sum);
			n1 = n2;
			n2 = sum;
		}
	}
	printf("\n");
	return (0);
}
