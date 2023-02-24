#include "main.h"
/**
 * _isupper - A function that checks for uppercase
 * @c: a parameter to be returned
 * Return: 1 if successful
 * 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
