#include <stdlib.h>
#define FAILURE -1

/**
 * int_index - searches for an integer.
 * @array: the array with the elements in it
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which the
 * cmp function does not return 0
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (FAILURE);

}
