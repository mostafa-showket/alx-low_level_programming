#include <stdio.h>

/**
 * main - prints the alphatbet
 *
 * Description: prints the alphabet in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';

	while (i < 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
