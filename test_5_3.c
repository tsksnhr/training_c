#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int count_s = 0, count_c = 0, count_p = 0;
    int length;
    int det;
    int i;
    char str[80];

    printf("type the string.\n");
    gets(str);

    length = strlen(str);

    for (i=0; i<length; i++){
        det = str[i];

        switch (det){
            case ' ':
                count_s++;
                break;
            case '.':
                count_p++;
                break;
            case ',':
                count_c++;
                break;
            default:
                break;
        }

    }

    printf("%d %d %d %d\n", i, count_s, count_c, count_p);

    return 0;
}