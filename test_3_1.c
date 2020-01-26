#include <stdio.h>
#include <conio.h>

int main(void){

    char ch;
    
    printf("Type tab, back space, or enter\n");
    ch = getche();
    printf("\n");

    switch (ch){
        case '\t':
            printf("tab\n");
            break;
        case '\b':
            printf("back space\n");
            break;
        case '\r':
            printf("enter\n");
            break;
        default:
            printf("invalid key\n");
    }

    return 0;
}