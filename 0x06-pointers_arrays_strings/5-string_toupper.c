#include "main.h"

/**
 * string_toupper - changes all lower case to upper
 * @n: pointer to array
 *
 * Return: pointer n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] -= 32;
		i++;
	}
	return (n);
}
