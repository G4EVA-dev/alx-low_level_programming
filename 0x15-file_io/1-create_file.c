#include "main.h"

/**
 * create_file - Creates for you a file
 * @filename: Pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int _fd, _w, _len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (_len = 0; text_content[_len];)
			_len++;
	}

	_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_w = write(_fd, text_content, _len);

	if (_fd == -1 || _w == -1)
		return (-1);

	close(_fd);

	return (1);
}
