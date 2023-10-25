#include <stdio.h>

/**
 * main - prints sum of fibonnaci numbers
 *
 * Description: prints the sum of even fibonnaci numbers under 4 mil
 * Return: Always 0
 */

int main(void)
{
	long int n1 = 0, n2 = 1, sum = 0, nextTerm;

	while (nextTerm	< 4000000)
	{
		if ((n2 % 2) == 0)
		{
			sum += n2;
		}
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
	}
	printf("%ld\n", sum);
	return (0);
}
