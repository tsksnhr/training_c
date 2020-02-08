#include <stdio.h>

int main(void){

    int array[] = {1, 10, 20, 30, 50};
    int *p;

    p = array;

    printf("%d\n", p);
    printf("%d\n", *p);

    (*p)++;
    printf("%d\n", p);
    printf("%d\n", *p);

    *p++;
    printf("%d\n", p);
    printf("%d\n", *p);

    return 0;
}