#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != alpha[j] && alpha[j] != '\0')
			j++;
		if (alpha[j] != '\0')
			s[i] = encode[j];
		i++;
	}
	return (s);
}
