#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int l, m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	l = open(filename, O_WRONLY | O_APPEND);
	m = write(l, text_content, length);

	if (l == -1 || m == -1)
		return (-1);

	close(l);

	return (1);
}
