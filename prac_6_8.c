#include <stdio.h>

int send_pointer(int *p);

int main(void){

    int *p, buf;

    /* initialize */
    buf = 0;
    p = &buf;

    /* call function */
    buf = send_pointer(p);

    /* show value of buf */
    printf("%d\n", buf);

    return 0;
}


int send_pointer(int *p){

    /* change value fo pointer(not address) */
    *p = -1;

    return *p;
}