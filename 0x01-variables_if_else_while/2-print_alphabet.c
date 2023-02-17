#include <stdio.h>
#include <ctype.h>
/**
 * main - A C program that prints alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		int lower_c = tolower(c);

		putchar(c);
		putchar('\n');
	}
	return (0);
}
