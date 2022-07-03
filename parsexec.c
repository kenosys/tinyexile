/*
* TinyExile, an old-school text adventure written in C.
* Based on a tutorial by Ruud Helderman. 
* <r.helderman@hccnet.nl>
* https://helderman.github.io/htpataic
* Licensed under MIT License.
*
* parsexec.c - text parser
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
function: parseAndExecute
A basic verb-noun parser using strtok and strcmp.
Returns 'false' if the user enters 'quit', causing the program to end.
*/
bool parseAndExecute(char *input)
{
    char *verb = strtok(input, "\n");
    char *noun = strtok(NULL, "\n");

    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return false;
        }

        else if (strcmp(verb, "look") == 0)
        {
            printf("The room is dark.\n");
        }

        else if (strcmp(verb, "go") == 0)
        {
            printf("It is too dark to go anywhere.\n");
        }

        else
        {
            printf("I don't understand '%s'. \n", verb);
        }
    }

    return true;
}