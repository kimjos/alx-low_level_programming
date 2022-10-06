#include "main.h"
#include <stdlib.h>

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
 * _puts - prints a string followed by a new line
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * _isnum - determines whether character is numerical
 * @c: character to be checked
 *
 * Return: 1 if c is numerical, 0 otherwise
 */
int _isnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * str_isnum - determines whether a string is all numerical
 * s: string to be checked
 *
 * Return: 1 if s is all numerical, 0 otherwise
 */
int str_isnum(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = 0; i < len; i++)
		if (!(_isnum(s[i])))
			return (0);
	return (1);
}


/**
 * main - multiply two positive numbers and print the answer
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 for success, other for failure
 */
int main(int argc, char **argv)
{
	unsigned int len_top, len_bot;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	if ((!(str_isnum(argv[1]))) || (!(str_isnum(argv[2]))))
	{
		_puts("Error");
		exit(98);
	}

	len_top = _strlen(argv[1]);
	len_bot = _strlen(argv[2]);
	return (0);
}
