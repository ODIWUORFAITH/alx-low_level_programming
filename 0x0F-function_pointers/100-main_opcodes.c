#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if incorrect number of arguments,
 *         2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}
	unsigned char *main_ptr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return 0;
}
