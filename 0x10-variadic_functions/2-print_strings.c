#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print string
 * @separator: string to be printed
 * @n: number of strings passed
 * @...: parameter to be printed
 * Return: print a string and nil incase string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list st;
	char *c;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(st, char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(st);
}
