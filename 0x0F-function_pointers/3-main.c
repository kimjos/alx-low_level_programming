#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main operations of the program
 * @argc: argument count
 * @argv: array of arguments as strings
 *
 * Return: 0 for success, other for failure
 */
int main(int argc, char **argv)
{
	int (*f)(int a, int b);
	int res;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}

	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
