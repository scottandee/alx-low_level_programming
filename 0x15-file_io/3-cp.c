#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int read_from(const char *file_from, char *buffer, int count);
int write_to(const char *file_to, char *buffer, int count);
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
	int read = 1, count = 0, written = 0;

	buffer = malloc(1024);

	while (read != 0)
	{
		count += 1;
		read = read_from(file_from, buffer, count);
		printf("read: %d\n", read);
		if (read != 0)
		{
			written = write_to(file_to, buffer, count);
			printf("written: %d\n", written);
		}
	}
	free(buffer);
}

/**
  * read_from - this reads from file from and strores in the buffer
  * @file_from: this is the file it will read from
  * @buffer: this is the temporary storage
  * @count: this is the number of times the file has beeen read
  * Return: this function returns the number of bytes read
  */
int read_from(const char *file_from, char *buffer, int count)
{
	int o, r, c, seek = 1024 * (count - 1);

	o = open(file_from, O_RDONLY);
	if (count != 1)
	{
		lseek(o, seek, SEEK_SET);
	}
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	r = read(o, buffer, 1024);
	if (r == -1)
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
	return (r);
}

/**
  * write_to - this writes from the temporary storage to the file_to
  * @file_to: this is the file that buffer will be written to
  * @buffer: this is the temporary storagei
  * @count: this is the number of times the file has beeen read
  * Return: this function returns the number of bytes written
  */
int write_to(const char *file_to, char *buffer, int count)
{
	int o, w, c, len = 0;

	if (count == 1)
	{
		o = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	}
	else
	{
		o = open(file_to, O_WRONLY | O_APPEND);
	}
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (buffer[len] != '\0')
	{
		len++;
	}
	w = write(o, buffer, len);

	if (w == -1)
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

	return (w);
}
