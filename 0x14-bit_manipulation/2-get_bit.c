#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: the index
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_bits;
	unsigned long int mask;

	num_bits = sizeof(n) * 8;

	if (index > num_bits - 1)
		return (-1);

	mask = 1UL << index;
	n &= mask;
	n >>= index;

	return (n);
}
