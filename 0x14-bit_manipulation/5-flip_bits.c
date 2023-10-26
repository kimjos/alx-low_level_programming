#include "main.h"

/**
 * count_1_bits - counts the number of 1 bits in a number
 * @n: the number
 *
 * Return: number of 1 bits
 */
int count_1_bits(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = sizeof(n) * 8;
	int i;
	int one_bits = 0;

	for (i = 0; i < size; i++)
	{
		one_bits += n & mask;
		n >>= 1;
	}

	return (one_bits);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int flips;

	xor = n ^ m;

	flips = count_1_bits(xor);

	return (flips);
}
