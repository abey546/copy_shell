#include "shell.h"

/**
 * _strlen - calculate the length.
 *
 * @str: A pointer to the string.
 * Return: length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
