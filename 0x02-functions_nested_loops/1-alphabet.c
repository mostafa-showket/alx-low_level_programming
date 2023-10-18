#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Description: prints lower case alphabets
 * Return: nothing
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
