#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>


int main(int argc, char** argv){
    /* Print ver and info */
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+C to exit\n");

    /* newer end loop */
    while(1){
        /* output our prompt */
        char* input = readline("lispy> ");

        /* read a line of user input of max size 2048 */
        add_history(input);

        /* echo input back to user */
        printf("No you're a %s\n", input);

        /* free retry input */
        free(input);
    }

    return 0;
}
