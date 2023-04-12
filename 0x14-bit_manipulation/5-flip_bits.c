#include "main.h"
/**
 * flip_bits - function that returns the number of bits that you would need
 * to flip to get from one number to another
 * @n: the first number to be flipped
 * @m: the second number
 * Return: the number of bits to convert the numbers from one to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_count;
	unsigned long int exOr;

	number_count = 0;
	exOr = n ^ m;
	while (exOr)
	{
		if (exOr & 1ul)
		{
			number_count++;
		}
		exOr = exOr >> 1;
	}
	return (number_count);
}
