#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the area to be filled
 * @b: constant value to be used
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
