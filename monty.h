#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

<<<<<<< HEAD

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

=======
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
<<<<<<< HEAD
>>>>>>> 17e408b0667f0b59fca8432988bcc4abfdc3bd0d
=======
void execute(stack_t **stack);
void execute_command(char *command, stack_t **stack, unsigned int line_number);
>>>>>>> da32d423f77f2ba53768abb7075e4763312bb55d

#endif
