#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Description: checks for alphabets wheter lower case or uppercase
 * Return: 1 if lower or upper case alphabets, 0 if not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
