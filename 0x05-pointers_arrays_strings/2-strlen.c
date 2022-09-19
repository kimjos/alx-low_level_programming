#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}
	return (j);
}
