#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL returns -1.
 *		If the file does not exist the user lacks
 *		write permissions returns -1.
 *		Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file, _write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	_file = open(filename, O_WRONLY | O_APPEND);
	_write = write(_file, text_content, len);

	if (_file == -1 || _write == -1)
		return (-1);

	close(_file);

	return (1);
}
