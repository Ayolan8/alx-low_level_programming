#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: the number to set to zero
 * @index: index of the bit
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = index;

	if (x > 63)
		return (-1);

	*n = *n & ~(1ul << x);
	return (1);
}
