#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Description: prints the alphabets without the letter e and q
 * Return: Always 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
