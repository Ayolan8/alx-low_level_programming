#include <stdio.h>
/**
 * main - A C program prints all possible combinations of single-digit number
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while
		(x < 10)
		{
			putchar('0' + x);
			x++;
			if (x < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
