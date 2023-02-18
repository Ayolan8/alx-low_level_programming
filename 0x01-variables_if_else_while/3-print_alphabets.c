#include <stdio.h>
#include <ctype.h>
/**
 * main - A C program that prints alphabet in lower case
 * Return: 0 (Success)
 */
int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
		putchar(toupper(x));
	}
	return (0);
}
