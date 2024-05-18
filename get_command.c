#include "main.h"

char command[50];

char *get_command(char *input_string)
{
    int i = 0, k = 0;
    while(input_string[i] != ' ' && input_string[i] != '\0')
	command[k++] = input_string[i++];
    command[k] = '\0';
    return command;
}
