#include <stdio.h>
#include "ayo.h"

/*
 * add - adds two number
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: addition of a and b
 */
int add(int a, int b)
{
	int add = a + b;

	return (add);
}

/*
 * sub - subtracts s number from the other
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: subtraction of a and b
 */
int sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/*
 * mul - multiply two number
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: multiplication of a and b
 */
int mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/*
 * div - divides two number
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: division of a and b
 */
int div(int a, int b)
{
	int div = a / b;

	return (div);
}

/*
 * mod - returns the remainder of two number
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: modulus of a and b
 */
int mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
