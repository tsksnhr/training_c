#include <stdio.h>

int atoz(char temp);

int main(void){

    char temp, *p;
    temp = 'a';
    p = &temp;

    atoz(temp);

//    printf("%p\n", p);
//    printf("%p\n", p+1);

    return 0;
}


int atoz(char temp){

    if (temp == 'z'){
        printf("%c", temp);
    }
    else{
        printf("%c", temp);
        atoz(temp+1);
    }

    return 0;
}
