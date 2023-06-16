#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - Assigns a random number to the variable n and prints whether is positive, negative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The number %d is ", n);
	if(n > 0)
		printf("positive\n");
	else if(n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}
