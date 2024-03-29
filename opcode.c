#include "main2.h"
#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack given by main
 * @str: string to compare
 * @total_lines: ammount of lines
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int total_lines)
{
	int i = 0;

	instruction_t ope[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (ope[i].opcode)
	{
		if (strcmp(ope[i].opcode, str) == 0)
		{
			ope[i].f(stack, total_lines);
			return; /* if we found a match, run the function */
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", total_lines, str);
	status = EXIT_FAILURE;
}
