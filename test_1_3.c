#include <stdio.h>

int o_to_c(int once);

int main(void){

    int temp;
    int cup;

    printf("How mmany?\n");
    scanf("%d", &temp);

    cup = o_to_c(temp);

    printf("%d cups\n", cup);
}

int o_to_c(int once){

    int temp;

    temp = once;

    return temp/8;
}