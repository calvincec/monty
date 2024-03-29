#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 * @total_lines: ammount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int total_lines __attribute__((unused)))
{
	print_stack(*stack);
}
