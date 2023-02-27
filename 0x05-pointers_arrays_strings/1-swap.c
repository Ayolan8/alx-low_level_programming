#include "main.h"
/**
 * swap_int - a function that swaps the values of 2 ints
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*a = 98;
	*b = *a; 
}
