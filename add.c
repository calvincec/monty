#include "main2.h"
#include "monty.h"

/**
 * _add -  sums the first two nodes of the stack
 * @stack: stack given by main
 * @total_lines: line counter
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int total_lines)
{
	int total = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: the stack is too short to be added\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	total = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, total_lines);
	(*stack)->n = total;
}
