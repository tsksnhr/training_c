#include <stdio.h>
#include <string.h>

void mystrcat(char *str1, char *str2);

int main(void){

    char str1[80], str2[80];

    printf("type strings\n");

    printf("first: ");
    gets(str1);
    printf(str1);
    printf("\n");

    printf("second: ");
    gets(str2);
    printf(str2);
    printf("\n");

    mystrcat(str1, str2);

    printf(str1);

    return 0;
}

/* wrong inplementation */
/*
void mystrcat(char *str1, char *str2){

    char *r_str;

    while(*str1){
        *r_str++ = *str1++;
    }
    while(*str2){
        *r_str++ = *str2++;
    }
    *r_str = '\0';

}
*/

void mystrcat(char *str1, char *str2){

    /* move to last address of first argument*/
    while(*str1){
        *str1++;
    }

    /* second argument is copied to fir st argument */
    while(*str2){
        *str1++ = *str2++;
    }

    /* null character */
    *str1 = '\0';
}