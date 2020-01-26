/* header */
#include <stdio.h>

/* prototype */
int series(int num);

/* global variety */
int column = 3;

int main(void){

    int i=0;

    do{
        printf("column = %d\n", column);
        column = series(column);
        i++;
    }while(i<10);

    return 0;
}

int series(int num){

    int temp;

    temp = num;

    return (temp*1468)%467;
}