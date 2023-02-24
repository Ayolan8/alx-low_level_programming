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
			if (y >= 10)
			{
				_putchar('l');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
