#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: a parameter to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
