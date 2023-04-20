#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of all to be printed
 * @...: parameter of what to be printed
 * Return: anything and nill incase string is NULL
 */

void print_all(const char * const format, ...)

{
	va_list all;
	int i = 0;
	char *st, *pt = "";

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", pt, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", pt, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", pt, va_arg(all, double));
					break;
				case 's':
					st = va_arg(all, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", pt, st);
					break;
				default:
					i++;
					continue;
			}
			pt = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(all);
}

