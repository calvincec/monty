#include "main2.h"
#include "monty.h"

/**
 * _mul - divides the next top value by the top value
 * @stack: the stack stack itslf
 * @total_lines: line counter
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int total_lines)
{
	int fruit;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	fruit = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, total_lines);
	(*stack)->n = fruit;
}

