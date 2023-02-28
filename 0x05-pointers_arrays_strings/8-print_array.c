#include <stdio.h>
#include "main.h"
/**
 * print_array - a function to print element of an array
 * @a: a pointer parameter
 * @n: a parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
