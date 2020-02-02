#include <stdio.h>
#include <string.h>

int main(void){

    char str[80];
    char str_buf[80];
    int i, j, k, length;

    j = 0;
    k = 0;

    printf("type string(under 80 characters).\n");
    gets(str);

    length = strlen(str);

    for (i=0; i<length ;i++){
        if (i%2 == 0){
            str_buf[i] = str[j];
            j++;
        }
        else{
            str_buf[i] = str[((length - 1) - k)];
            k++;
        }
    }

    printf("%d\n", i);
/*    printf("originated string is %s.\n", str);
    printf("encoded string is %s.\n", str_buf); */
    printf(str);  
    printf(str_buf);

    return 0;
}