#include <stdio.h>

int main(void){

    int *p, q;

    for (q=0; q<10; q++){
        p = &q;
        printf("%d\n", *p);
    }

    return 0;
}