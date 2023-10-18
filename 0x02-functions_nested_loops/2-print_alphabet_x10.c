#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 *
 * Description: prints lower case alphabets
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i, n = 0;

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
