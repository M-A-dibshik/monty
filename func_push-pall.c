#include "monty.h"

/**
 * push - pushes an elements to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 * Return: address of the new element
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node->n = line_number;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

/**
  * pall -  prints all the values on the stack,
  *starting from the top of the stack.
  * @stack: pointer to the top of the stack
  * @line_number: line number of the input file
  * Return: void
  */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (*stack == NULL)
		return;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * main - main function
 * Return: Nothing
*/
int main(void)
{
	stack_t *stack = NULL;

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	pall(&stack, 1);

	return (0);
}
