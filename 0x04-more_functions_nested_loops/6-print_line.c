#include "main.h"
/**
 * print_line - a function that draws
 * @n: a parameter to be printed
 * Return: 0
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
