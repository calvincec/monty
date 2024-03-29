#include "main2.h"
#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @total_lines: ammount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int total_lines)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", total_lines);
		status = EXIT_FAILURE;
		return;
	}
	printf("%c\n", (*stack)->n);
}
