#include <stdio.h>
/**
 * main- A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	printf("Size of double: %ld byte(s)\n", sizeof(double));

	return (0);
}
