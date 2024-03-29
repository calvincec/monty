#include "main2.h"
#include "monty.h"

/**
 * pstr - prints the contents of thestack as a string
 * @stack: stack from main function
 * @total_lines: line counter for error messages
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int total_lines __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
