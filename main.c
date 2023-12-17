#include "monty.h"

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
		stack_t *stack = NULL;
		unsigned int line_number = 1;

		if (argc != 2)
		{
				printf("USAGE: monty file\n");
				exit(EXIT_FAILURE);
		}
		open_file(argv[1], &stack, &line_number)
		if (stack == NULL)
			exit(EXIT_FAILURE);

		execute_command(stack, line_number);

		free(stack);
		exit(EXIT_SUCCESS);
		return (0);
}
