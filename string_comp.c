#include "shell.h"

/**
 * _strcmp - compares two strings character by character.
 *
 * desc: this function compares @s1 and @s2 until they mismatch.
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return:
 *    - A negative value if @s1 is less than @s2.
 *    - 0 if @s1 is equal to @s2.
 *    - A positive value if @s1 is greater than @s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
