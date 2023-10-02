#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr_file;
	char *cchars;
	ssize_t num_chars;
	ssize_t f_chars;

	if (filename == NULL)
	{
		return (0);
	}
	ptr_file = fopen(filename, "r");
	if (ptr_file == NULL)
	{
		return (0);
	}
	cchars = (char *)malloc(letters);
	if (cchars == NULL)
	{
		fclose(ptr_file);
		return (0);
	}
	num_chars  = fread(cchars, 1, letters, ptr_file);
	if (num_chars <= 0)
	{
		fclose(ptr_file);
		free(cchars);
		return (0);
	}
	f_chars = write(STDOUT_FILENO,cchars,num_chars);
	if (f_chars <= 0 || (ssize_t)f_chars != num_chars)
	{
		fclose(ptr_file);
		free(cchars);
		return (0);
	}

	fclose(ptr_file);
	free(cchars);
	return (num_chars);
}
