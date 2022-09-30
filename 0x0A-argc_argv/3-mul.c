#include <stdio.h>
#include <stdlib.h>

/**
 * atoi is a function that converts a string into an int
 * main - Prints the multiplication of two numbers, followed by a new line
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If the program receives two arguments - 0.
 * If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}

