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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
