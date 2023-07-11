#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
 	int sign = 1, i = 0;
       	int res = 0;

	while (s[i] != '\0')
        {
                if (s[i] == '-')
                        sign *= -1;
                else if (s[i] >= '0' && s[i] <= '9')
                {
                        res = (res * 10) + (s[i] - '0');
                }
                else if (res != 0)
                {
                        // Stop parsing if a non-digit character is encountered
                        // after encountering digits before.
                        break;
                }
                i++;
        }
        return (res * sign);
}
