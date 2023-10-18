#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: is the character to be checked
 *
 * Description: takes argument c to  check if lower case character or not
 * Return: 1 if lower case, 0 if not lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
