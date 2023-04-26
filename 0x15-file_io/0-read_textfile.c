#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: _w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *_buf;
	ssize_t _fd;
	ssize_t _w;
	ssize_t _t;

	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
		return (0);
	_buf = malloc(sizeof(char) * letters);
	_t = read(_fd, _buf, letters);
	_w = write(STDOUT_FILENO, _buf, _t);

	free(_buf);
	close(_fd);
	return (_w);
}
