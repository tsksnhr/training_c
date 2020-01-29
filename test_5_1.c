#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    int i;
    char str[80];

    printf("Please type string (80 words).\n");
    gets(str);

    if (strlen(str)<80){
        for (i = strlen(str); i<80; i++){
            strcat(str, ".");
        }
        printf("str = %s\n", str);
    }
    else{
        printf("error.\n");
    }

    return 0;
}