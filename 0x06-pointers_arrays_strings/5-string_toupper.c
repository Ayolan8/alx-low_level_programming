#include "main.h"
/**
 * char *string_toupper - a function to change case
 * @n: a pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - 32;
		}
		x++;
	}
	return (n);
}
