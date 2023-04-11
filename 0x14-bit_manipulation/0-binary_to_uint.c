#include "main.h"
#include <stddef.h>
/**
 * binary_to_unit - function that converts a binary number 
 * @b: string to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	for (; *b != 0; b++)
	{
		if (*b == '0')
		{
			x = x << 1;
		}
		else if (*b == '1')
		{
			x = x << 1;
			x++;
		}
		else
			return (0);
	}
	return (x);
}
