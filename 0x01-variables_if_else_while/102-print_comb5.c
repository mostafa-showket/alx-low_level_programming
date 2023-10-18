#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints the digits under 10 seperated with commas and spaces
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
