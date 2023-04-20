#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets the sum of all its parameters
 * @n: constant value n
 * Return: sum and 0 if n == 0
 * ...: parameters to calculate the sum
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ap;
	unsigned int j, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}

