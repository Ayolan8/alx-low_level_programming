#include "main.h"
/**
 * reverse_array - a function to reverse an array's content
 * @a: pointer to the array
 * @n: a variable parameter
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
