#include <stdio.h>
/**
 * main - A C program that prints all possible different combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int unit;
	int tenth;

	for (unit = 0; unit <= 9; unit++)
	{
		for (tenth = 0; tenth <= 9; tenth++)
		{
			if (!((unit == tenth) || (tenth > unit)))
			{
				putchar('0' + tenth);
				putchar('0' + unit);
				if (!(unit == 9 && tenth == 8))
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
