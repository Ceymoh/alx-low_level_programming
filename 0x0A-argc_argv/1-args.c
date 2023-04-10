#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: arry of strings
 * Return: on success return 0.
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc-1);

	return (0);
}
