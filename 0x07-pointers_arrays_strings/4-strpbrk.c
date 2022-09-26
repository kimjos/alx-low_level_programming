#include "main.h"

/**
 * _strpbrk - searches string of bytes
 *
 * @s: string to scan
 * @accept: prefix substring of s
 * Return: on success return bytes of s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
