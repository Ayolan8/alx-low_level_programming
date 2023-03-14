#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * char *create_array - create an array of chars
 * @size: size of the chars
 * @c: the specific character to initialize an array of chars with
 * Return: an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
