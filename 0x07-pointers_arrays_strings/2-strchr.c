#define NULL 0
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched in
 * @c: character to be searched for
 *
 * Return: a pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
