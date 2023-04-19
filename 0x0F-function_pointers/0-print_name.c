#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints out the name
 * @name: character to be printed out
 * @f: pointer to a function
 *
 * Return: prints out the name
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)

		f(name);
}
