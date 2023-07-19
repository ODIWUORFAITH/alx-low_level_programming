#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of a given function.
 * @function_ptr: Pointer to the function.
 * @num_bytes: Number of bytes to print.
 */
void print_opcodes(void *function_ptr, int num_bytes)
{
	unsigned char *opcode_ptr = (unsigned char *)function_ptr;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 * Return: 0 on success, 1 if incorrect number of arguments,
 *         2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int num_bytes;

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
	print_opcodes(main, num_bytes);
	return 0;
}
