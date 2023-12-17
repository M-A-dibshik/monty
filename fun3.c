#include "monty.h"

/**
 * div -  div the second top element of the stack by the top elem of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: void
 */
void div(stack_t **stack, unsigned int line_number)
{
		if ((*stack) == NULL || (*stack)->next == NULL)
		{
					printf(stderr, "L<%d>: can't div, stack too short\n", line_number);
					exit(EXIT_FAILURE);
		}
		if ((*stack)->n == 0)
		{
				printf(stderr, "L<%d>: division by zero\n", line_number);
				exit(EXIT_FAILURE);
		}
		(*stack)->next->n /= (*stack)->n;
		pop(stack, line_number);
}

/**
 * mul - mul the second top elem of the stack with the top elem of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number of the input file
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
		if ((*stack) == NULL || (*stack)->next == NULL)
		{
				printf(stderr, "L<%d>: can't mul, stack too short\n", line_number);
				exit(EXIT_FAILURE);
		}
		(*stack)->next->n *= (*stack)->n;
		pop(stack, line_number);
}
