#include "main.h"

/**
 * main - print alphabets in lowercase
 * Return: success.
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)

	_putchar(letter);

	_putchar('\n');

}
