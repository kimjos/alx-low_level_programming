#include "main.h"

/**
 * factorial - return factorial
 *
 * @n: integer
 * Return: 1 on success or -1 fail
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
