#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Description: prints the first 98 fibonacci numbers starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int i, overflow;
	unsigned long n1 = 0, n2 = 1, nextNumber;
	unsigned long n1_h, n1_t, n2_h, n2_t, nextNumber_h, nextNumber_t;

	for (i = 0; i < 91; i++)
	{
		nextNumber = n1 + n2;
		n1 = n2;
		n2 = nextNumber;
		printf("%ld, ", nextNumber);
	}

	n1_h = n1 / 1000000000;
	n1_t = n1 % 1000000000;
	n2_h = n2 / 1000000000;
	n2_t = n2 % 1000000000;

	for (i = 91; i < 98; i++)
	{
		overflow = (n1_t + n2_t) / 1000000000;
		nextNumber_h = (n1_h + n2_h) + overflow;
		nextNumber_t = (n1_t + n2_t)-(overflow * 1000000000);
		if (i == 97)
		{
			printf("%ld%ld", nextNumber_h, nextNumber_t);
		} else
		{
			printf("%ld%ld, ", nextNumber_h, nextNumber_t);
			n1_h = n2_h;
			n1_t = n2_t;
			n2_h = nextNumber_h;
			n2_t = nextNumber_t;
		}
	}
	printf("\n");
	return (0);
}
