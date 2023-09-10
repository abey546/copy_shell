#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Function prototypes*/
void trim_newline(char **str);
size_t _strlen(const char *str);
int count_arguments(const char *str);
int _strcmp(const char *s1, const char *s2);
char **tokenize_input(const char *input);
void execute_command(char **args);
void handle_input(void);

#endif /* _SHELL_H_ */

