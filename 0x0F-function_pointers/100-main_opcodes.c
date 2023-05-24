#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program har prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
		printf("%02x ", ptr[i]);

	printf("\n");
	return (0);
}
