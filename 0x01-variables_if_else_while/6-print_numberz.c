#include <stdio.h>

/**
 * main - prints numbers
 *
 * Descritpion: prints numbers from 0 to 9 without using printf
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
