#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void read_from(const char *file_from, char *buffer);
void write_to(const char *file_to, char *buffer);
void cp(const char *file_from, const char *file_to);

/**
  * main - this is the entry point function
  * @argc: this is the count of command line arguments
  * @argv: this contains a string of command line arguments input at runtime
  * Return: always 0
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}

/**
  * cp - this copies the content of a file into another file
  * @file_from: this is the file that will be read from
  * @file_to: this is the file that will be written to
  */
void cp(const char *file_from, const char *file_to)
{
	char *buffer;

	buffer = malloc(1024);

	read_from(file_from, buffer);
	write_to(file_to, buffer);
	free(buffer);
}

/**
  * read_from - this reads from file from and strores in the buffer
  * @file_from: this is the file it will read from
  * @buffer: this is the temporary storage
  */
void read_from(const char *file_from, char *buffer)
{
	int o, r, c;

	o = open(file_from, O_RDONLY);
	r = read(o, buffer, 1024);

	if (o == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
}

/**
  * write_to - this writes from the temporary storage to the file_to
  * @file_to: this is the file that buffer will be written to
  * @buffer: this is the temporary storage
  */
void write_to(const char *file_to, char *buffer)
{
	int o, w, c;

	o = open(file_to,  O_WRONLY | O_TRUNC);
	w = write(o, buffer, 1024);

	if (o == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
}
