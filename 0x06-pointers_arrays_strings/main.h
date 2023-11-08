#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be added to dest
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src);

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: most bytes used from src
 *
 * Description: same as strcat except it uses at most n bytes from src,
 * and doesn't need src to be null terminated if it contains n or more bytes
 * Return: pointer to resulting dest string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strcpy - copies a string
 * @dest: buffer that will take copied string
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest,char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: integer tells the spaces between then*/

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: array length
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lower case to upper
 */

char *string_toupper(char *);

/**
 * cap_string - capitalizes all words of a string
 */

char *cap_string(char *);

/**
 * leet - encodes a string into 1337
 */

char *leet(char *);

/**
 * rot13 - encodes a string using rot13
 *
 * Return: encoded string
 */

char *rot13(char *);

/**
 * print_number - prints an integer
 * @n: number to be printed
 */

void print_number(int n);

/**
 * infinite_add - adds two numbers
 * @n1: number to be added
 * @n2: number to be added
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * @Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
  * print_buffer - prints a buffer
  * @b: buffer
  * @size: buffer size
  * Return: no return
**/

void print_buffer(char *b, int size);

#endif
