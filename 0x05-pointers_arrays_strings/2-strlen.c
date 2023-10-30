#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string that we need to get its length
 *
 * Return: length of the given length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
