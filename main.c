#include "monty.h"
/**
 * main - C - Stacks, Queues - LIFO, FIFO
 * @argc: Number of arguments
 * @argv: Array with arguments
 *
 * Return: 0
 */


int main(int argc, char **argv)
{
char *line = NULL;
size_t buf = 0;
FILE *file = NULL;
char *token = NULL;

if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (file == NULL)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}

while ((getline(&line, &buf, STDIN_FILENO) != EOF))
{
	token = strtok(line, " ");
	if (token != NULL)
	{
		token = strtok(NULL, " ");
	}
}
return (0);

}
