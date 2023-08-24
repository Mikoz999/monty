#include "monty.h"
/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Exit status
 */

int main(int argc, char **argv)
{
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stdout, "USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	interpret_file(argv[1], &stack);
	free_stack(stack);

	return (0);
}
