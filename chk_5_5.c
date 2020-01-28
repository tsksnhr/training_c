#include <stdio.h>
#include <string.h>

int main(void){

    char str[80];
    char temp[80];
    
    do{
        strcat(str, temp);
        gets(temp);
    }while(strcmp("quit", temp));

    /* ??? */
    printf("output is ");
    printf(str);

    return 0;
}