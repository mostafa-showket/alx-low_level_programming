#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints the compination of three digits seperated with commas
 * and spaces
 * Return: Always 0
 */

int main(void)
{
	int i, j, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (z = j + 1; z <= '9'; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
