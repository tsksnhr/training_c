#include <stdio.h>

int main(void){

    char str[80], *p;
    int i, spaces;

    printf("type string: ");

    gets(str);
    p = str;

    spaces = 0;
    for (p; *p; *p++){
        if (*p == ' '){
            spaces++;
        }
    }

    printf("a number of spaces: %d", spaces);

    return 0;
}