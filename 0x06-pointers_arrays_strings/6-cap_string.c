#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string to capitalized
 *
 * Return: pointer to n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if ((n[i - 1] == ' ' || n[i - 1] == '\n' || n[i - 1] == ','
		|| n[i - 1] == ';' || n[i - 1] == '.' || n[i - 1] == '!'
		|| n[i - 1] == '?' || n[i - 1] == '"' || n[i - 1] == '('
		|| n[i - 1] == ')' || n[i - 1] == '{' || n[i - 1] == '}'
		|| n[i - 1] == '\t') && (n[i] >= 97 && n[i] <= 122))
			n[i] -= 32;
		i++;
	}
	return (n);
}
