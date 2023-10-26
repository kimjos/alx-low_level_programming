#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * _pow - takes x to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x ^ y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow(x, --y));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * * there is one or more chars in the string b that is not 0 or 1
 * * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int converted = 0;

	if (!b)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		converted += (b[i] - '0') * _pow(2, len - 1 - i);
	}

	return (converted);

}
