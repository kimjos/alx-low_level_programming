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
 * _strcpy - copies the string from src to dest
 * @dest: array where copy is stored
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

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
