#include "monty.h"

/**
 * functions - get the proper function.
 * @line_number: Num of the line.
 * Return: 0
 */

int functions(char *op, stack_t **stack, unsigned int line_number)
{
	instruction_t ops_t[] = {
		{"push", _push},
		{NULL, NULL}
	};
int i;

for (i = 0; ops_t[i].opcode != NULL; i++)
{
	if (strcmp(ops_t[i].opcode, op) == 0)
	{
		ops_t[i].f(stack, line_number);
	}
}
return (0);
}
