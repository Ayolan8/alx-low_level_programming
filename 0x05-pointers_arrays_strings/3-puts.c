#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: a parameter to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
