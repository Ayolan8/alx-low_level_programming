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
	int i, end;

	for (end = 0; end <= *str; end++)
	{
	}
	end += 1;

	array = malloc(sizeof(char) * end);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= end; i++)
	{
		array[i] = str[i];
		if (array == NULL)
			return (NULL);
	}
	return (array);
}
