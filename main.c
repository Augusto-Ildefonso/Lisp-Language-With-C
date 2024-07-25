#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main (void){
    puts("Lispy version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1){
        char *input = readline("lispy> ");
        
        add_history(input);

        printf("No you are a %s\n", input);

        free(input);
    }

    return(0);
}