#include "main2.h"
#include "monty.h"

/**
 * _sub -  substracts the first two nodes of the stack
 * @stack: stack given by main
 * @total_lines: line counter
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int total_lines)
{
	int diff;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	diff = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, total_lines);
	(*stack)->n = diff;
}

