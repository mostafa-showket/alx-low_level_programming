#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: (0) if no integers found, else returns the integer found
 */

int _atoi(char *s)
{
	int i = 0, sign = 0, number = 0;
	int firstInt = 0, temp = 0, tens = 1;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] < '0' || s[i - 1] > '9' || s[i - 1] == 0)
			{
				firstInt = i;
				temp = i;
			}
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (sign % 2 != 0)
		sign = -1;
	else
		sign = 1;
	if (i != 0)
	{
		for (; temp < i; temp++)
			tens *= 10;
		for (; firstInt <= i; firstInt++)
		{
			number += (s[firstInt] - '0') * tens;
			tens /= 10;
		}
		return (number * sign);
	} else
		return (0);
}
