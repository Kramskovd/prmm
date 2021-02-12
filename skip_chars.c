#include <stdio.h>

int skip_chars(void);

int skip_chars(void){
    int r, c;

    for(c == 0;;){
        c = fgetc(stdin);

        if(c == '\n' || c == EOF)
            break;
        
        if(c != ' ' && c != '\t')
            r = -1;
    }

    return r;
}
