#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file and writes a string.
 * @filename: name of file.
 * @text_content:a string to file.
 *
 * Return: on success 1, on failure -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		w = write(fd, text_content, len);
	}
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
