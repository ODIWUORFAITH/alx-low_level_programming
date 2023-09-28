#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Counts the number of bits
 * @n: First number
 * @m: Second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned int k;

	output = n ^ m;
	k = 0;

	while (output > 0)
	{
		k += output & 1;
		output >>= 1;
	}
	return (k);
}
