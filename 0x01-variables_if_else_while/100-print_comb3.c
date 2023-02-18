#include <stdio.h>
/**
 * main - A C program that prints all possible different combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	y = '0';
	x = '0';
	for (y = '0'; y <= '9'; y++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (!((y == x) || (x > y)))
			{
				putchar(y);
				putchar(x);
				if (!(x == '9' && y == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
