#include "main2.h"
#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @total_lines: ammount of lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int total_lines)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}
