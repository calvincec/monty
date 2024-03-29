#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the top data
 * @stack: stack given by main
 * @total_lines: ammount of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int total_lines)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
