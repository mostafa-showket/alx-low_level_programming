#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 *
 * Description: prints every other  character of a string, starting with the
 * first character, followed by a new line
 */

void puts2(char *str)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
		i++;

	for (;j < i; j++)
		if (j % 2 == 0)
			_putchar(str[j]);
	_putchar('\n');
}
