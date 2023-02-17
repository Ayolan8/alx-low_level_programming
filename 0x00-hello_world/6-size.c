#include <stdio.h>
/** 
 *main - a C programme that prints the size of various types on the computer
 *Return: 0 (Success)
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of long int: %zu byte\n", sizeof(long int));
printf("Zize of long long int: %zu byte\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
