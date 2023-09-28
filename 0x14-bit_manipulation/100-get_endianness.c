#include <stdio.h>
#include "main.h"
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
