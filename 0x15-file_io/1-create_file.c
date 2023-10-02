#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 *
 * @filename:filename to create
 * @text_content:content to write
 * Return: returns 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int f_file;
	ssize_t num_chars;

	if (filename == NULL)
		return (-1);
	f_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		num_chars = write(f_file, text_content, strlen(text_content));
		if (num_chars == -1)
		{
			close(f_file);
			return (-1);
		}
	}
	close(f_file);
	return (1);
}
