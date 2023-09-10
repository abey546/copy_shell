#include "shell.h"

/**
 * count_arguments - count number of arguments in a string.
 * desc -  this function count num of args separated by taps,
 * spaces or new line charac in a string.
 *
 * @str: the input string to aanalysed.
 *
 * Return: the count of argument in a string.
 */
int count_arguments(const char *str)
{
	int count = 0;
	int c_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			c_word = 0;
		}
		else if (!c_word)
		{
			c_word = 1;
			count++;
		}
		str++;
	}
	return(count);
}
