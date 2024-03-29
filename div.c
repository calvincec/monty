#include "main2.h"
#include "monty.h"

/**
 * _div - divides the next top value by the top value
 * @stack: stack given by main
 * @total_lines: line counter
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int total_lines)
{
	int div = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	div = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, total_lines);
	(*stack)->n = div;
}
