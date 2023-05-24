#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*operand)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operand = get_op_func(argv[2]);

	if (operand == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operand(a, b));
	return (0);
}
