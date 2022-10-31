#include "main.h"

/**
 * get_msb - gets the most significant bit of a number
 * @n: the number
 *
 * Return: the msb
 */
unsigned long int get_msb(unsigned long int n)
{
	unsigned long int mask = 0;

	mask = ~mask;
	mask >>= 1;
	mask = ~mask;

	if (mask & n)
		return (1);
	return (0);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int hit_first_1 = 0;
	int num_bits;
	int i;
	unsigned long int cur_bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	num_bits = sizeof(n) * 8;

	for (i = 0; i < num_bits; i++)
	{
		cur_bit = get_msb(n);
		if (cur_bit == 1)
			hit_first_1 = 1;
		if (hit_first_1)
			_putchar(cur_bit + '0');
		n <<= 1;
	}
}
