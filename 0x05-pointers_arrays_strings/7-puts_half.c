#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int count = 0, n;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 1)
		n = (count - 1) / 2;
	else
		n = count / 2;

	while (n < count)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
