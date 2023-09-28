#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Clears the value of a bit
 * @n: Pointer to the unsigned long int
 * @index: The index of the bit to clear
 *
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
