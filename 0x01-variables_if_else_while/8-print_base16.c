#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Description: prints hexadecimal numbers
 * Return: Always 0
 */

int main(void)
{
	int i;
	char a = '0';

	for (i = 0; i < 16; i++)
	{
		if (a == '9'+1)
			a = 'a';
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
