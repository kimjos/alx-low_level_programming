#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index
 *
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_bits;
	unsigned long int mask;

	num_bits = sizeof(*n) * 8;

	if (index > num_bits - 1)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
