#include "main.h"

void scan_input(char *prompt, char *input_string)
{
    system("clear");

    while(1)
    {
	printf(ANSI_COLOR_GREEN"%s$"ANSI_COLOR_RESET, prompt);
	scanf("%[^\n]", input_string);

	//to clear stdin
	getchar();

	if(strncmp(input_string, "PS1=", 4) == 0 )
	{
	    strcpy(prompt, input_string + 4);
	}
	else if((strcmp(input_string, "exit") == 0) || strcmp(input_string, "Exit") == 0)
	{
	    //exit system call
	    _exit(0);
	}
	
	char *command = get_command(input_string);
	//printf("%s\n", command);
	
	int command_type = check_command_type(command);
	//printf("Command type is %d\n", command_type);
    }
}

