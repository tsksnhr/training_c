#include <stdio.h>

int fact(int num);

int main(void){

    int num, ans;

    num = 10;
    /* ans = 0; */
    ans = fact(num);
    printf("%d", ans);

    return 0;
}

int fact(int num){

    if (num <= 1){
        /* return fact(num) */              /* wrong */
        return 1;
    }
    else{
        /* return fact(num-1)*fact(num) */  /* wrong */
        return fact(num-1)*num;
    }
}

