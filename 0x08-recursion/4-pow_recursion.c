#include "main.h"

/**
 * _pow_recursion - power of int
 *
 * @y: integer
 * @x: power integer
 * Return: 1 on success or -1 fail
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
