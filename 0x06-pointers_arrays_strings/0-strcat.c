#include "main.h"
/**
 * char *_strcat - function to concatenate two strings
 * @dest: input to concatenate
 * @src: input to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x;

	for (x = 0; dest[x] + src[x]; x++)
	{
		if (dest[x] != '\0')
			return (dest);
	}
	*dest = x;
	return (dest);
}
