#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit
 *
 * Description: checks if the last digit of a random number is below 6 or above
 * 5 and accourding to the state of the condition it prints string specifing
 * where the last digit is.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, lastDigit);
	} else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	return (0);
}
