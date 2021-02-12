#include <stdio.h>

int readInt(int *p);
int skip_chars(void);

int readInt(int *p){
    int f;

    for(f = 0; !feof(stdin); f = 1){
        if(f)
            printf("Please, try again ...\n");
        
        printf("Input: ");

        if(scanf("%d", p) != 1){
            skip_chars();
            continue;
        }

        if(skip_chars == -1)
            continue;
        
        return 0;
    }

    return -1;
}
