#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: buffer that will take copied string
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
