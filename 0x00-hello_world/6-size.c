#include <stdio.h>
/* main - a C program that prints the size of various types on the computer.*/
/* Your program should return 0 */
int main(void)
{

	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of a int: %lu.\n" (unsigned long)sizeof(a));
	printf("Size of a char: %lu.\n" (unsigned long)sizeof(b));
	printf("Size of a long int: %lu.\n" (unsigned long)sizeof(c));
	printf("Size of long long int: %lu.\n" (unsigned long)sizeof(d)); 
	printf("Size of a float: %lu.\n" (unsigned long)sizeof(e));

	return (0);
}
