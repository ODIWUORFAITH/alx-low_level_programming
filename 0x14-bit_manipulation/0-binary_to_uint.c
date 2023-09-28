#include <stdio.h>
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome ,k;

	outcome = 0;
	k = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		outcome = (outcome << 1) | (*b - '0');
		b++;
		k++;
	}
	return (outcome);
}

