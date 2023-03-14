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
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
		if (array == NULL)
			return (NULL);
	}
	return (array);
}
