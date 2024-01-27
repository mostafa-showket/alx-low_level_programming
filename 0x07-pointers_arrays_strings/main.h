#ifndef main_h
#define main_h

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the area to be filled
 * @b: constant value to be used
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory data from area to another
 * @dest: memory area to be copied to
 * @src: memory area copied data from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
