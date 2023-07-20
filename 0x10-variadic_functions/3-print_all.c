#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *           The function supports the following format specifiers:
 *           'c': char
 *           'i': integer
 *           'f': float
 *           's': char * (if the string is NULL, print (nil) instead)
 *           Any other character is ignored.
 * @...: A variable number of arguments to be printed based on the format.
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    unsigned int i = 0;
    char *str, *separator = "";

    va_start(ap, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(ap, int));
                break;

            case 'i':
                printf("%s%d", separator, va_arg(ap, int));
                break;

            case 'f':
                printf("%s%f", separator, va_arg(ap, double));
                break;

            case 's':
                str = va_arg(ap, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s%s", separator, str);
                break;

            default:
                break;
        }
	separator = ", ";
        i++;
    }
    va_end(ap);
    printf("\n");
}
