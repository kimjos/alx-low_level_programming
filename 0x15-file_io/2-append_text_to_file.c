#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (fd);

	if (text_content)
	{
		ret = write(fd, text_content, _strlen(text_content));
		if (ret == -1)
		{
			close(fd);
			return (ret);
		}
	}

	close(fd);
	return (1);
}
