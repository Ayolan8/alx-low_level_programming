#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
