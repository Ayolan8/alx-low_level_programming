#include <stdio.h>
/**
 * main - A C program that prints all single digit numbers of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
