#include <stdio.h>

int main(void){

    char *p, str[80] = "this is a test";

    p = str;

    printf("%c\n", *(p+2));
    printf("%c\n", str[2]);

    return 0;
}