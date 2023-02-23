#include "main.h"
/**
 * print_last_digit - a function that prints last digit
 * of a number
 * @b: parameter to be printed
 * Return: x if successful
 */
int print_last_digit(int b)
{
	int x;

	x = b % 10;
	if (x < 0)
	{
	x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
