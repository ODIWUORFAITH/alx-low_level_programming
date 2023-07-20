#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *        If n is 0, the function will only print a new line.
 *        If n is greater than 0 but no integers are provided,
 *        the function will print the separator and then a new line.
 * @...: A variable number of integer arguments to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        int num = va_arg(ap, int);
        printf("%d", num);
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }
    va_end(ap);
    printf("\n");
}
