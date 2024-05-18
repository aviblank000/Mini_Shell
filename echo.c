#include "main.h"

void echo(char *input_string, int status)
{
    //echo $?
    if(strncmp("echo $?", input_string, 7) == 0)
        printf("%d\n",status);

    //echo $$ 
    if(strncmp("echo $$", input_string, 7) == 0)
        printf("%d\n",getpid());

    //echo $SHELL
    if(strncmp("echo $SHELL", input_string, 11) == 0)
        system("pwd");
}

