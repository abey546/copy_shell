#include "shell.h"

/**
 * tokenize_input - tokenizes an input string into array of string
 *
 * desc: this function takes input strings and tokenizes into individual
 * tokens based on space chars.
 *
 * @input: the string to be tokenized.
 *
 * Return: an array of strings containing the tokens.
 */
char **tokenize_input( const char *input)
{
	char **args;
	int arg_count = count_arguments(input);
	char *arg_token;
	int i;

	args = (char **) malloc((arg_count + 1) * sizeof(char *));

	if (args == NULL)
	{
		perror("memmory allocation failed");
		exit(1);
	}
	arg_token = strtok((char *)input, " ");

	for (i = 0; i < arg_count; i++)
	{
		args[i] = arg_token;
		arg_token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	return (args);
}
