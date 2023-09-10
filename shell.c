#include "shell.h"

/**
 * handle_input - handles user input for the shell.
 * desc: this function read user input from the standard input
 * and process it. it displays prompt if running interactive mode
 * the function keeps to process until user leaves.
 */
void handle_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	int is_terminal = isatty(STDIN_FILENO);
	char *token;
	ssize_t input_length;

	while (1)
	{
		if (is_terminal)
		{
			char prompt[] = "$ ";

			write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);
		}

	input_length = getline(&input, &input_size, stdin);

		if (input_length == -1)
		{
			break;
		}

		trim_newline(&input);

		if (_strcmp(input, "exit") == 0)
		{
			break;
		}

		 token = strtok(input, "\n");

			while (token != NULL)
			{
				char **args = tokenize_input(token);

				execute_command(args);

				if(is_terminal)
				{
					wait(NULL);
				}


				free(args);
				token = strtok(NULL, "\n");
			}
	}
	free(input);
}
