#include "main.h"
/**
 * set_bit - function that sets the value of bit
 * @n: the number to get the bit
 * @index: index of the bit
 * Return: 1 if successsfully, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = index;

	if (x > 63)
	{
		return (-1);
	}
	*n = *n | 1ul << x;
	return (1);
}
