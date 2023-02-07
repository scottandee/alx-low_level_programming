#include "main.h"

/**
  * append_text_to_file - appends text at the end of the file
  * @filename: this is the name of the file
  * @text_content: this is the text that will be appended to the file
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	while (text_content[len] != '\0')
	{
		len++;
	}

	if (filename == NULL)
	{
		return (-1);
	}
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == 1 && text_content == NULL)
		return (1);
	if (o == -1 && text_content == NULL)
		return (-1);
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);
	return (1);

}
