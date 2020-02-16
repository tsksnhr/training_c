/* why does this program crach? */

#include <stdio.h>

double ave();

int main(void){

    int count;
    double ans, num[10];

    count = 0;

    printf("type 10 number.\n");

    while(count<10){
        scanf("%lf", &num[count]);
        count++;
    }

    ans = ave(num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9]);
    printf("%f", ans);

    return 0;
}

double ave(double d0, double d1, double d2, double d3, double d4, double d5, double d6, double d7, double d8, double d9){

    double sum, ans;

    sum = d0+d1+d2+d3+d4+d5+d6+d7+d8+d9;
    ans = sum/10.0;

    return ans;
}
