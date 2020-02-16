#include <stdio.h>

int main(void){

    int i, *p;

    p = &i;
    *p = 100;

    printf("%d %p", i, p);

    return 0;
}