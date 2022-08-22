#include "main.h"

/**
 *  create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
	int _file, len = 0, _write;

	if (filename == NULL)
		return (-1);

	_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	_write = write(_file, text_content, len);

	if (_write == -1)
	{
		return (-1);
	}
	close(_file);
	return (1);
}
