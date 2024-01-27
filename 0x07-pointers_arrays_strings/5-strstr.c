#define NULL 0
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			while (needle[i] == haystack[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (NULL);
}
