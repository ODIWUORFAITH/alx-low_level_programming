#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *t;

	num = 1;
	t = (char *)&num;
	if (*t == 1)
		return (1);
	else
		return (0);
}
