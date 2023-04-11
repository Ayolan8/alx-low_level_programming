#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: index of thr bit
 * Return: the value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;
	unsigned int y = index;

	if (y > 63)
	{
		return (-1);
	}

	x = 1 << y;
	return ((n & x) > 0);
}
