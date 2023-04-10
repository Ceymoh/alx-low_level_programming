#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: string of arrays
 * Return: Return 0 on success
 */

int main(int argc, char *argv[])

{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
