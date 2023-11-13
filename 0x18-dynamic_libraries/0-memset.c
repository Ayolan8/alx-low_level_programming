#include "main.h"
/**
 * char *_memset - fills memory with a constant byte
 * @s: a pointer to the memory area that will be filled
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
