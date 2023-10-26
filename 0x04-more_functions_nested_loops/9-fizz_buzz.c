#include <stdio.h>

/**
 * main - prints fizz, buzz and fizzbuzz instead of numbers
 *
 * Description: prints fizz for numbers divisible by 3 and
 * buzz for numbers divisible by 5 and fizz buzz for numbers divisible by both
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
			printf("%d", i);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
