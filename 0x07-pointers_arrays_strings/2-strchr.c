#include "main.h"
/**
 * char *_strchr - locates a character in a string
 * @s: a string pointer
 * @c: the character to look for
 * Return: a pointer to thr firdt occurence of the @c character
 * @s: return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
