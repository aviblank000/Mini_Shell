#include "main.h"

//To findout the type command ->  built in, external, no command
int check_command_type(char *command)
{
    // built in
    char *builtins[] =  {"echo"};
    for(int i = 0 ; builtins[i] != NULL ; i++)
    {
        if(strcmp(command,builtins[i]) == 0)
            return BUILTIN;
    }
    
    // no command
    if(strcmp(command,"\0") == 0)
        return NO_COMMAND;
}

