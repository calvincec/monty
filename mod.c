#include "main2.h"
#include "monty.h"

/**
 * mod - computes the remainder of the division
 * @stack: the stack itself
 * @total_lines: line counter
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int total_lines)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, total_lines);
	(*stack)->n = result;
}
