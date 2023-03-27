#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string used
 * Return: return a spring in reverse
 *
 */

void print_rev(char *s)

{
	int len = 0;
	int m;

	while (*s != '\0')

		{
		len++;
		s++;
	}
	s--;

		for (m = len; m > 0; m--)

	{
		 _putchar(*s);
		 s--;
	}
	_putchar('\n');
}
