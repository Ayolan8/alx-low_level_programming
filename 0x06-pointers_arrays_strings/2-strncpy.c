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
	for (n = 0; (dest[n] = src[n]) != '\0'; n++)
		return (n);
}
