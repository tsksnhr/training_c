#include <stdio.h>

int main(void){

    int num_room;
    int length;
    int width;
    int count;
    float square;

    printf("How many rooms?\n");
    scanf("%d", &num_room);

    for (count=0; count < num_room; count++){

        printf("Width?\n");
        scanf("%d", &width);

        printf("Length?\n");
        scanf("%d", &length);

        square = width*length;
        printf("room size is %6.2f\n", square);
    }

    return 0;
}