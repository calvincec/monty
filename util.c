#include "main2.h"
#include "monty.h"

/**
 * is_digit - checks if the string is a digit
 * @str: the string to check
 *
 * Return: 1 if success, 0 if not
 */
int is_digit(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
/**
 * isnumber - checks if the string is a number
 * @str: the provided string
 *
 * Return: 1 if the string is a number, else, 0.
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}
