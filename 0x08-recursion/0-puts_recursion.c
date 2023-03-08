#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to a string to be printed
 */
void _puts_recursion(char *s)
{
	int x;
	char c[] = "Puts with recursion";

	s = c;
	for (x = 0; *(s + x); s++)
	{
		if (*s != '\0')
		{
			_putchar(*s);
		}
	}
	_putchar('\0');
}
