#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to ve reversed
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
	}
}
