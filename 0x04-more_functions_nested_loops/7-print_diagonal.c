#include "main.h"
/**
 * print_diagonal - a function
 * @n: a parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		_putchar(92);
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
		_putchar(32);
	}
	_putchar(32);
}
