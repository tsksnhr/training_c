#include <stdio.h>

int main(void){

    int count[100][10];

    /* cast to int pointer */
    *((int *)count + 10*44 + 8) = 99;

    printf("%d", *((int *)count + 10*44 + 8));

    return 0;
}