#include <stdlib.h>
#include "main.h"
/**
 * char *_strpbrk - search a string for any set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Returns: a pointer to the byte in @s...
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
