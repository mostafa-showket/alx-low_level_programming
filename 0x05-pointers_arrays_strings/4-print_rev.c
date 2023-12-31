#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int length = 0, i;

	while (*s != '\0')
	{
		length++;
		++s;
	}
	for (i = length; i > 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
