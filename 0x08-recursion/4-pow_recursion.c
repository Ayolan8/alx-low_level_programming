#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of @x raised to the powr of @y
 * @x: an input
 * @y: an input
 * Return: the value of @x raiseed to the power of @y
 */
int _pow_recursion(int x, int y)
{
	int z = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		z = x * _pow_recursion(x, y - 1);
		return (z);
	}
}
