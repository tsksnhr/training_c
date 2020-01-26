#include <stdio.h>

int main(void){

    int i, j, k;

    for (k=0; k<10; k++){

        printf("first number is ?\n");
        scanf("%d", &i);

        printf("second number is ?\n");
        scanf("%d", &j);

        switch(j){
            case 0:
                printf("zero is not used for divide\n");
                break;
            default:
                printf("answer is %d\n", i/j);
                break;
        }
    }
    return 0;
}