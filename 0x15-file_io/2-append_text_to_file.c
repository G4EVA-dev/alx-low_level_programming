#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _o, _w, _len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (_len = 0; text_content[_len];)
			_len++;
	}

	_o = open(filename, O_WRONLY | O_APPEND);
	_w = write(_o, text_content, _len);

	if (_o == -1 || _w == -1)
		return (-1);

	close(_o);

	return (1);
}
