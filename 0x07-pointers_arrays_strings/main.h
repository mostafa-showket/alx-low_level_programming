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

/**
 * _strchr - locates a character in a string
 * @s: string to be searched in
 * @c: character to be searched for
 *
 * Return: a pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: target matches
 *
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be searched for
 *
 * Return: a pointer to the byte in s matches one in accept, or NULL
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle);

#endif
