#include <stdio.h>
/**
 * main - A C program that prints all possible different combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = 10;
	while
		(x < 30)
	{
		putchar(x + '0');
		x++;
		if ((x != 11 && x != 22) && x < 30)
		{
			putchar(x + '0');
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
