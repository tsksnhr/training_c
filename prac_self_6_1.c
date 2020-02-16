#include <stdio.h>

int main(void){

    char *p;
    char str[20] = {"abcdefghijklmn"};

    p = str;

    printf("1 = %s\n", p);
    printf("2 = %c\n", *p);
    printf("3 = %c\n", p+1);
    printf("4 = %c\n", *p+1);
    printf("5 = %c\n", *(p+1));

    return 0;
}