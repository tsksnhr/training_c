#include <stdio.h>
#include <string.h>

int main(void){

    char str[80];
    char *pstr;
    int length, i;

    printf("type the string.\n");
    gets(str);

    length = strlen(str);

    pstr = str;

    while(str[i]){
        if (str[i] == ' '){
            pstr = &str[i];
        }
    }

    return 0;
}