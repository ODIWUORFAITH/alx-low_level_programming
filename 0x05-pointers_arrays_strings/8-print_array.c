#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints integers in an array
 * @a:Pointer to first element in the array
 * @n: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	i++;
	}
putchar('\n');
}
