#include <stdio.h>
/**
 * main - This program assigns a random number to the variable n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
