#include <stdio.h>
/** 
* main - A c program thatprints out the size of various types on the computer
* Return: 0 (success)
*/ 
int main(void)
{
int a;
char b;
double d;
float e;
printf("Size of int: %zu bytes\n", sizeof(a));
printf("Size of char: %zu bytes\n", sizeof(b));
printf("Size of double: %zu byte\n", sizeof(d));
printf("Zize of float: %zu byte\n", sizeof(e));
return (0);
}
