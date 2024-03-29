#include "monty.h"

/**
* rotr - rotates the last node of a stack_t stack
* @stack: stack head
* @total_lines: line count
*
* Return: void
*/
void rotr(stack_t **stack, unsigned int total_lines)
{
	stack_t *bottom;
	stack_t *prev;

	(void) total_lines;
	if (!stack || !*stack || !(*stack)->next)
		return;

	bottom = *stack;

	while (bottom->next)
		bottom = bottom->next;

	prev = bottom->prev;
	bottom->next = *stack;
	bottom->prev = NULL;
	prev->next = NULL;
	(*stack)->prev = bottom;
	*stack = bottom;
}

