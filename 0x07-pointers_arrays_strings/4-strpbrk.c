#define NULL 0
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be searched for
 *
 * Return: a pointer to the byte in s matches one in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}

	return (NULL);
}
