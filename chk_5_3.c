/* reserch mode number */

/* header */
#include <stdio.h>

int main(void){

    int i, j, max, count, mode;
    int columns[20];

    max = 0;

    printf("type 20 number.\n");

    for (i=0; i<20; i++){
        scanf("%d", &columns[i]);
        count = 1;

        for (j=0; j<i; j++){
            if (columns[i] == columns[j]){
                count++;
                if (max<count){
                    max = count;
                    mode = columns[i];
                }
            }
        }
    }
    
    for (i=0; i<20; i++){
        printf("%d ", columns[i]);
    }
    printf("\n");
    printf("mode is %d\n", mode);
    printf("%d is used %d times.", mode, max);

    return 0;
}