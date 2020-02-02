/* hunged man */

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){

    char correct_str[80] = "concatenation";
    char str_buf[80];
    char input;
    int correct_flg;
    int i, count, length, miss_count, correct_count;

    length = strlen(correct_str);

    for (i=0; i<=length; i++){
        str_buf[i] = '-';
    }

    correct_count = 0;
    miss_count = 0;

    while ((miss_count <= length) && (correct_count != length)){

        correct_flg = 0;

        printf("game start!\n");
        printf("%s\n", str_buf);
        printf("Your life is %d\n", (length - miss_count));

        printf("type 1 character.\n");
        /* getchar() is not suitable because of line-buffer */
        input = getche();
        printf("\n");

        for (i=0; ((i<length) && (correct_flg == 0)); i++){
            if (input == correct_str[i]){
                str_buf[i] = correct_str[i];
                correct_str[i] = '-';
                correct_flg = 1;
                ++correct_count;
                printf("You right.\n");
            }
        }
        if (correct_flg == 0){
            printf("You missed.\n");
            ++miss_count;
        }
    }

    if (miss_count > length){
        printf("You died.\n");
    }
    else{
        printf("You won.\n");
    }

    return 0;
}