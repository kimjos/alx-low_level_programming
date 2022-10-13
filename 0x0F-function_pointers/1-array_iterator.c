#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array with the elements in it
 * @size: size of the array
 * @action: the function to be executed
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);

}
