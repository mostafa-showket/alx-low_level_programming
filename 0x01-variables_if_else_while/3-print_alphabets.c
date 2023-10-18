#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Descritption: prints the alphabets in lower case then in upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i, I;

	while (i < 'a')
	{
		putchar(i);
		i++;
	}
	while (I < 'A')
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
