#include "main.h"
/**
 * print_square - a function
 * @size: a parameter
 * Return: ...
 */
void print_square(int size)
{
	for (; size > 0; size--)
	{
		_putchar(35);
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
