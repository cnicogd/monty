#include "holberton.h"
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
size_t size_char = 0;
size_t buf = 0;

if (argc != 2)
{
	fprintf(stdout, "USAGE: monty file");
	exit(EXIT_SUCCESS);
}

while ((getline(&line, &buf, STDIN_FILENO) != EOF);
{
	if (size_char == EOF)
		exit(EXIT_SUCCESS);
}
return (0);
}
