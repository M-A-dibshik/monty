#include "monty.h"

/**
 * execute -  read and executethe command in the stack
 * @stack: pointer to the top of the stack
 *
 * Return: void
*/
void execute(stack_t **stack)
{
		unsigned int line_number;
		char *command;
		int len = 0

		while (getline(&command, &len, stdin) != -1)
		{
				len = _strlen(command)

				if (len == 0 || command[0] == '#')
				continue;
					line_number = _atoi(command);
					execute_command(command, stack, line_number);
		}
	free(command);
}

/**
 * execute_command - execute the command in the stack
 * @command: command to execute
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command
 *
 * Return: void
 */
void execute_command(char *command, stack_t **stack, unsigned int line_number)
{
		if (_strcmp(command, "push") == 0)
		push(stack, line_number);
		else if (_strcmp(command, "pall") == 0)
		pall(stack, line_number);
		else if (_strcmp(command, "pint") == 0)
		pint(stack, line_number);
		else if (_strcmp(command, "pop") == 0)
		pop(stack, line_number);
		else if (_strcmp(command, "swap") == 0)
		swap(stack, line_number);
		else if (_strcmp(command, "add") == 0)
		add(stack, line_number);
		else if (_strcmp(command, "nop") == 0)
		nop(stack, line_number);
		else if (_strcmp(command, "sub") == 0)
		sub(stack, line_number);
		else if (_strcmp(command, "div") == 0)
		div(stack, line_number);
		else if (_strcmp(command, "mul") == 0)
		mul(stack, line_number);
		else
		{
				printf("Error: unknown instruction %s\n", command);
				exit(EXIT_FAILURE);
		}
		free(command);
}
