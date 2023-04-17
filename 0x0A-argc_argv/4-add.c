#include "main.h"
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: value counter
 * @argv: array of strings
 * Return: no digit print error and return 1
 *
 */

int main(int argc, char **argv)

{
	int i, j, sum = 0;


	if (argc < 0)
	{
		printf("0\n");
		return (1);
	}
	if (!argv)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[i]; i++)
		j++;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	sum = i + j;

	printf("%d\n", sum);
	return (0);
}

