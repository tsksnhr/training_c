#include <stdio.h>

int atoz(char *p);

int main(void){

    char temp, *p;
    temp = 'a';
    p = &temp;

    atoz(p);

//    printf("%p\n", p);
//    printf("%p\n", p+1);

    return 0;
}


int atoz(char *p){

    if (*p == 'z'){
        printf("%c", p);
    }
    else{
        printf("%c", p);
        atoz(p+1);
    }

    return 0;
}
