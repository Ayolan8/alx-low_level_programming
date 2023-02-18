#include <stdio.h>
/**
 * main - A C program that prints all possible different number
 * Return: 0 (Success)
 */
int main(void)
{
	int o;
	int t;
	int h;

	for (h = 0; h < 9; h++)
	{
		for (t = 0; t < 9; t++)
		{
			for (o = 0; o < 9; o++)
			{
				if (!((o == t) || (t == h) || (t > o) || (h > t)))
				{
					putchar('0' + h);
					putchar('0' + t);
					putchar('0' + o);
					if (!(o == 7 && t == 8 && h == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
