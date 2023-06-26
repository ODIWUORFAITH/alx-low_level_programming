#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: This function swaps the values of the integers pointed to @a and @b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
