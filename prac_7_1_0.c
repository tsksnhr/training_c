#include <stdio.h>

double ave();

int main(void){

    printf("%f", ave());

    return 0;
}

double ave(void){

    int count;
    double num, sum, ans;

    sum = 0.0;

    printf("type numbers.\n");

    for (count=0; count<10; count++){
        scanf("%lf", &num);             /* %f is invalid, %lf is OK (because scanf())*/
        sum = num + sum;
    }
    ans = sum/((double)count);

    return ans;
}

