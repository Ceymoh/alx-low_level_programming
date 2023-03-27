#include "main.h"

/**
 * _puts - prints a string
 * Return: A string
 * @str: character to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

