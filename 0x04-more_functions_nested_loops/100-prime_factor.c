#include <stdio.h>
#include <math.h>

/*
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
    long x, maxf;
    long number = 612852475143;
    double square = sqrt(number);
    
    maxf = 1; // Initialize maxf to a minimum value

    for (x = 2; x <= square; x++)
    {
        while (number % x == 0)
        {
            maxf = x;
            number = number / x;
        }
    }

    if (number > maxf) // Check if the remaining number is greater than the current max factor
    {
        maxf = number;
    }

    printf("%ld\n", maxf);
    return 0;
}
