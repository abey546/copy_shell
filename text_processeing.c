#include "shell.h"

/**
 * trim_newline - trims a trailing new line character from a string
 *
 * @str: A pointer to a pointer to the string to be trimmed.
 */
void trim_newline(char **str)
{
	size_t len = _strlen(*str);

	if (len > 0 && (*str)[len - 1] == '\n')
	{
		(*str)[len - 1] = '\0';
	}
}
