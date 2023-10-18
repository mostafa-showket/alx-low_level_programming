#include <stdio.h>

/**
 * main - prints in reverse
 *
 * Description: prints the aphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
