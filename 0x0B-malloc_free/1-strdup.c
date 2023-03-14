#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * char *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: the duplicated string if successful
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i, end;

	i = 0;
	end = 0;

	if (str == NULL)
		return (NULL);
	while (str[end])
		end++;
	array = malloc(sizeof(char) * (end + 1));
	if (array == NULL)
		return (NULL);
	while ((array[i] = str[i]) != '\0')
		i++;

	return (array);
}
