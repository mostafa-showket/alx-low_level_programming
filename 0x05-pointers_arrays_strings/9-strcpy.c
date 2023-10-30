#include "main.h"

/**
 * *_strcpy - copies string pointed by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer points to a buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	for (; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
