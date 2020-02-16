/* mystrlen */

/* header */
#include <stdio.h>

/* prototype */
int mystrlen(char *str);

int main(void){

    char str[80];

    printf("type string: ");
    gets(str);

    printf("a number fo character in the string is %d\n", mystrlen(str));

    return 0;
}

int mystrlen(char *str){

    int counter;
    /* char *p; */

    counter = 0;
    /* p = str; */

    while(*str){
        counter++;
        /* p++; */
        str++;
    }

    return counter;
}