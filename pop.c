#include "main2.h"
#include "monty.h"

/**
* pop - pops the very top
* @stack: stack given by main
* @total_lines: line number for error messages
*
* Return: void
*/
void pop(stack_t **stack, unsigned int total_lines)
{
	stack_t *tmprr = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: empty stack which cant be popped\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	tmprr = (*stack)->next;
	free(*stack);
	*stack = tmprr;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
