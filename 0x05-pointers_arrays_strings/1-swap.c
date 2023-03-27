#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * Return: Success
 * @a: int to be used
 * @b: int to be used
 *
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

