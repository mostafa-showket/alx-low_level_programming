#include "main.h"

/**
 * _memcpy - copies memory data from area to another
 * @dest: memory area to be copied to
 * @src: memory area copied data from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[n];
	return dest;
}
