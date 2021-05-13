#include "holberton.h"

/**
 * functions - get the proper function.
 * @line_number: Num of the line.
 * Return: 0
 */

int functions(unsigned int line_number)
{
instruction_t ops_t[] = {
	{"push", _push},
	{"pall", _pall},
	{"pint", _pint},
	{"pop", _pop},
	{NULL, NULL}
};
int i;
char *opcode;
for (i = 0; ops_[].opcode; i++)
{
if (strcmp(ops_s[i].opcode, string))
{
	ops_s[i].f();
	return (1);
}
}
return (0);
}
