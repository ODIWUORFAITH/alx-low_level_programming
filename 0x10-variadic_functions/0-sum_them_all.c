#include "variadic_functions.h"
#include  <stdarg.h>
/**
 * sum_them _all - Returns the sum of all its parameters
 * @n: The name of the parameter passed to the function
 * @...: A varriable number of parameters to calculate the sum 
 * Return: If n == 0, return 0 , otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
