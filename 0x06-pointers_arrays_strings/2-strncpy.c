#include "main.h"
/**
 * char *_strncpy - a function to copy a string
 * @dest: an input
 * @src: an input
 * @n: a parameter to be printed
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
