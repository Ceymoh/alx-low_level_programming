#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes parameters
 * @array: an array
 * @size: the sizen given of an array
 * @action: pointer to the function
 * Return: Nothing.
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))

{
	unsigned int j = 0;

	if (array == NULL || action == NULL)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}

	}
}
