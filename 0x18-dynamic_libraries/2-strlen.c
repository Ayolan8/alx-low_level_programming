#include "main.h"
/**
 * _strlen - a function that returns the len of a string
 * @s: A parameter to be printed
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
