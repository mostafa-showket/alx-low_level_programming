#ifndef main_h
#define main_h

/**
 * _putchar - prints given char to standard output
 * @c: character to  be printed
 */

int _putchar(char);

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked 
 *
 * Return: 1 if the charcter is upper case, 0 otherwise
 */

int _isupper(int c);

/**
 * _isdigit - checks if given character is digit
 * @c: character to be checked
 * 
 * Return: 1 if the character is digit, 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - multiblies two integers
 * @a:first integer
 * @b: second integer
 *
 * Return: the result of multiblication of a and b
 */

int mul(int a, int b);

/**
 * print_numbers - print numbers
 *
 * Description: prints the numbers, from 0 to 9
 * Return: nothing
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
 * Description: prints the numbers from 0 to 9 except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers from 0 t0 14
 * 
 * Return: nothing
 */

void more_numbers(void);

/**
 * print_line - draws a straight line in terminal
 * @n: number of times _ should be printed
 *
 * Return: nothing
 */

void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of time \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int c);

/**
 * print_square - prints a square
 * @size: integer number indicates the size of the square
 * 
 * Return: nothing
 */

void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: integer number indicates the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size);

#endif
