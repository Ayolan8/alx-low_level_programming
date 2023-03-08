#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: a paramater of the number to be returned
 * Return: the
 */
int factorial(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
