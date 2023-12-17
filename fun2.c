#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
		stack_t *tmp;
		int value;

		if ((*stack) == NULL || (*stack)->next == NULL)
		{
				printf(stderr, "L<%d>: can't swap, stack too short\n", line_number);
				exit(EXIT_FAILURE);
		}
		tmp = (*stack)->next;
		value = (*stack)->n;
		(*stack)->n = tmp->n;
		tmp->n = value;
}

/**
 * add -  adds the top two elements of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
		stack_t *tmp;

		if ((*stack) == NULL || (*stack)->next)
		{
				printf(stderr, "L<%d>: can't add, stack too short\n", line_number);
				exit(EXIT_FAILURE);
		}
		tmp = (*stack)->next;
		(*stack)->n += tmp->n;
		pop(stack, line_number);
}

/**
 * nop - doesn’t do anything.
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: void
*/
void nop(stack_t **stack, unsigned int line_number)
{
		stack_t *tmp = *stack;
		(void)tmp;
		(void)line_number;
}

 /**
  * sub - sub the top elem of the stack from the second top elem of the stack.
  * @stack: pointer to the top of the stack
  * @line_number: line number of the input file
  *
  * Return: void
  */
void sub(stack_t **stack, unsigned int line_number)
{
		stack_t *tmp;
		int value;

		if ((*stack) == NULL || (*stack)->next == NULL)
		{
					printf(stderr, "L<%d>: can't sub, stack too short\n", line_number);
					exit(EXIT_FAILURE);
		}
		tmp = (*stack)->next;
		value = (*stack)->n;
		(*stack)->n = value - tmp->n;
		pop(stack, line_number);
}
