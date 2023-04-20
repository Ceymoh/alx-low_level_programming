#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - gives the result
 * @argc: argument counter
 * @argv: an array of pointer
 * Return: 0.
 */

int main(int argc, char *argv[])


{
	int put1, put2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	put1 = atoi(argv[1]);
	op = argv[2];
	put2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && put2 == 0) || (*op == '%' && put2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(put1, put2));

	return (0);
}
