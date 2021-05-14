#include "monty.h"
/**
 *tokens - tokenize command line input for each command
 *buffer: save the value of the line
 *token: create the split tokens
 *@line: value line
 *@argv: imput argument
 *Return: 0
 **/



int tokens(char *line, char **argv)
{
	int i;
	char *token = NULL;

	token = strtok(line, " ");

	if (token != NULL)
	{
		while (token != NULL)
		{
			token = strtok(NULL, " ");
		}
	return (0);
}
