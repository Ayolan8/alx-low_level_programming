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
		putchar('0' + x);
		x++;
		if ((x != 11 && x != 22) && x < 30)
		{
			putchar('0' + x);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
