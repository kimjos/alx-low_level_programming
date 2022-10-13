#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: operand 1
 * @b: operand 2
 *
 * Return: result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: operand 1
 * @b: operand 2
 *
 * Return: result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: operand 1
 * @b: operand 2
 *
 * Return: result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: operand 1
 * @b: operand 2
 *
 * Return: result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo a by b
 * @a: operand 1
 * @b: operand 2
 *
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
