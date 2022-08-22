#include "main.h"
/**
 * read_textfile - rreads a text file and prints it to
 * the POSIX standard output.
 * @filename: the file to read.
 * @letters: the number of letters it should read and print.
 * Return: this return the number of chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _file, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_file = open(filename, O_RDONLY, 600);
	if (_file == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(_file, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		return (0);
	}

	free(buffer);
	close(_file);
	return (_write);
}
