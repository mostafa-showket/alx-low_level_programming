#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints the digits under 10 seperated with commas and spaces
 * Return: Always 0
 */

int main(void)
{
	int i;
	int comma = ',';
	int space = ' ';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(comma);
		putchar(space);
	}
	putchar('\n');
	return (0);
}
