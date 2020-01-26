#include<stdio.h>

int main(void){

    int count;
    int ans;
    int input;

    /* initialize */
    ans = 58;
    count = 0;

    do{
        printf("What's the number?\n");
        scanf("%d", &input);

        if (ans == input){
            printf("corect\n");
            break;
        }
        else if (ans < input){
            printf("Your number is larger than answer\n");
        }
        else{
            printf("Your number is smaller than answer\n");
        }
        count++;
    }while(count < 10);

    return 0;
}