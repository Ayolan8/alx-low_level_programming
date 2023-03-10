#include "main.h"
/**
 * char *_memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area to copy bytes from
 * @dest: memory area to copy bytes to
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
