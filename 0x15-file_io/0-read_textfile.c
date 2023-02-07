#include "main.h"
#include "stdlib.h"

/**
  * read_textfile - this reads a text file and prints it to the standard output
  * @filename: this is the name of the file
  * @letters: this is the amount of bytes to read
  * Return: 0 if file cannot be read
  * 0 if filename is null
  * 0 if write fails
  * if successful, the actual numbers it could print out
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
