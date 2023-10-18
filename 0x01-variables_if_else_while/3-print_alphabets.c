#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Descritption: prints the alphabets in lower case then in upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a', I = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (I <= 'Z')
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
