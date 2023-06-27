#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies string into another string
 * @dest: Pointer to string to which another string is copied
 * @arc: pointer to string which is copied to another string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[1] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
