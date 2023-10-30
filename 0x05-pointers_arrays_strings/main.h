#ifndef main_h
#define main_h

/**
 * _putchar - puts character t ostandard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * reset_to_98 - updates the value of the parameter it points to
 * @n: pointer to the parameter to be updated
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 */

void swap_int(int *a, int *b);

/**
 * _strlen - calculates the length of a string
 * @s: string that we need to get its length
 *
 * Return: length of the given length
 */

int _strlen(char *s);

/**
 * _puts - prints a string follwed by new line
 * @str: string to be printed
 */

void _puts(char *str);

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: string to ve reversed
 */

void rev_string(char *s);

/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 *
 * Description: prints every character of a string, starting with the first
 * character, followed by a new line
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: size of array
 */

void print_array(int *a, int n);

/**
 * *_strcpy - copies string pointed by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer points to a buffer 
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src);

#endif
