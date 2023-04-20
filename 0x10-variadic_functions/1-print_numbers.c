#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints given numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: parameters to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list k;
	unsigned int i;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(k, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	 va_end(k);
}



