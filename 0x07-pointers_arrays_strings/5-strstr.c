#include <stdlib.h>
#include "main.h"
/**
 * char *_strstr - locates a substring
 * @haystack: the longer string to print
 * @needle: the substring to search for
 * Return: a pointer to the beginning of the substring...
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
