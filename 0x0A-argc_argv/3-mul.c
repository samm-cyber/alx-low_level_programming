#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: number of arguments in the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", prod);

	return (0);
}

