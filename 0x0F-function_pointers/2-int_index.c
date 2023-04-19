#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - seraches for an integer
 * @size: number of elemts in an array
 * @array: an array
 * @cmp: pointer to the function
 * Return: no element return -1, size less or equal to zero 1
 *
 */

int int_index(int *array, int size, int(*cmp)(int))

{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
		return (-1);
	}
}
