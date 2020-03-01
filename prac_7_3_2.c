#include <stdio.h>

int prompt(char *str_0, char *str_1);

int main(void){

    char str[80];

    prompt("type string.\n", str);
    printf("you typed %s", str);

    return 0;
}

int prompt(char *str_0, char *str_1){

    printf(str_0);
    gets(str_1);

    return 0;
}