#include "monty.h"


/**
 * file_error - prints file error message and exits
 * @argv: argv given by main()
 *
 * Desc: print msg if  not possible to open the file
 * Return: nothing
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * error_usage - prints usage message and exits
 *
 * Desc: if user does not give any file or more than
 * one argument to your program
 *
 * Return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
