#include <stdio.h>
#include "main.h"
/**
 * main - checks the endianness
 *
 * Return: Success (0)
 */

int get_endianness(void)
{
    unsigned int i = 1;
    char *c;

    c = (char *) &i; /* points to the first byte of the integer i */
    if (*c == 1) /* 1st byte looks like 0x01 */
	{
	printf("Little Endian\n");
	}
    else /* 1st byte looks like 0x00 */
    {
	printf("Big Endian\n");
    }
    return (0);
}
