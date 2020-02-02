#include <stdio.h>
#include <string.h>

int main(void){

    char str[80], str_alt[80];
    char *pstr;
    int length, i, flg;

    printf("type the string.\n");
    gets(str);

    length = strlen(str);
    flg = 0;

    for (i=0; ((i<length) && (flg == 0)); i++){
        if (str[i] == ' '){
            pstr = &str[i+1];
            flg = 1;
        }
    }

    i = 0;

    while(*pstr){
        str_alt[i] = *pstr++;
        i++;
    }
    str_alt[i] = '\0';

    printf(str_alt);

    return 0;
}