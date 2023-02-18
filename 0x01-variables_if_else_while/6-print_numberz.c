#include <stdio.h>
/**
 * Write a program that prints all single digit numbers of base 10 
 * Return: 0 (success)
 */
int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	return (0);
}
