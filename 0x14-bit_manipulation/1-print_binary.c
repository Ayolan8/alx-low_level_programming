#include "main.h"
#include <unistd.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the binary to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1ul << 63;
	char x = '0';

	while (!(bit & n) && bit != 0)
	{
		bit = bit >> 1;
	}
	if (bit == 0)
	{
		write(1, &x, 1);
	}
	while (bit)
	{
		if (bit & n)
			x = '1';
		else
			x = '0';
		write(1, &x, 1);
		bit = bit >> 1;
	}
}
