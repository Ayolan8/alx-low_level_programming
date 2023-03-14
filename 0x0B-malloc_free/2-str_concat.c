#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, x1, x2;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	for (x1 = 0; x1 <= *s1; x1++)
	{
		x1 += 1;
	}
	for (x2 = 0; x2 <= *s2; x2++)
	{
		x2 += 1;
	}
	x1 += x2;
	array = malloc(sizeof(char) * x1);
	i = 0;
	while (i < *s1)
	{
		i++;
	}
	x = 0;
	while (x < *s2)
	{
		array[i] += *s2;
		i++;
		x++;
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
