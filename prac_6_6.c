#include <stdio.h>

int main(void){

    int val, *p, **mp;

    p = &val;
    mp = &p;

    **mp = 100;

    printf("%d %p %p", **mp, p, mp);

    return 0;
}