/*
* TinyExile, an old-school text adventure written in C.
* Based on a tutorial by Ruud Helderman. 
* <r.helderman@hccnet.nl>
* https://helderman.github.io/htpataic
* Licensed under MIT License.
*
* main.c - main loop
*/

#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "look around";

/*
function: getInput 
Gets input from keyboard using fgets. 
If the player enters EOF character, the function will 
return false and execution ends.
*/
 
static bool getInput(void)
{
    printf("\n--> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

/*
main function 
Calls parseAndExecute() first to execute a pre-determined command 
(line 13).

getInput() takes keyboard input, which is then passed as an 
argument to parseAndExecute.

Execution stops if any of the two returns false.
*/

int main()
{
    printf("TinyExile\n");
    while (parseAndExecute(input) && getInput());
    printf("Farewell!\n");
    return 0;
}