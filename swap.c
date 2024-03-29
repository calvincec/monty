#include "main2.h"
#include "monty.h"

/**
 * swap -  swaps data from top to previous
 * @stack: stack given by main
 * @total_lines: ammount of lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int total_lines)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	tmp = *stack;
	tmp_n = tmp->n;
	tmp->n = tmp_n;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;

}
