#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: most bytes used from src
 *
 * Description: same as strcat except it uses at most n bytes from src,
 * and doesn't need src to be null terminated if it contains n or more bytes
 * Return: pointer to resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
