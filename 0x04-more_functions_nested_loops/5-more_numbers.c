#include "main.h"
/**
 * more_numbers - a function
 * Return: ...
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 13; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
