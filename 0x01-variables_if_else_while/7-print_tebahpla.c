#include <stdio.h>
/**
 * main - A C program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
		putchar(' ');
	}
	return (0);
}
