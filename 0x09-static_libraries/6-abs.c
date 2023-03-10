#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @x: parameter to be printed
 * Return: x if successful
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = -(x);
	}
	else if (x >= 0)
	{
		x = x;
	}
	return (x);
}
