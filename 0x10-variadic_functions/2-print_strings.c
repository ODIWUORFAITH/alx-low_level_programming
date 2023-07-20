#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *        If n is 0, the function will only print a new line.
 *        If n is greater than 0 but no strings are provided,
 *        the function will print the separator and then a new line.
 * @...: A variable number of string arguments to be printed.
 *        If any of the strings is NULL, "(nil)" will be printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    char *str;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(ap, char *);

        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");

        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    va_end(ap);

    printf("\n");
}
