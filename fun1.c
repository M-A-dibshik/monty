#include "monty.h"

/**
 * push - pushes an elements to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: address of the new element
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int value;

	if (!stack || !(*stack))
	{
		print(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		exit(EXIT_FAILURE);

	value = (*stack)->n;
	new_node->n = value;
	new_node->next = *stack;
	*stack = new_node;
}
/**
  * pall -  prints all the values on the stack, starting from the top of stack
  * @stack: pointer to the top of stack
  * @line_number: line number of the input file
  *
  * Return: void
  */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int i = 0;

	if (*stack == NULL)
		return;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
}
