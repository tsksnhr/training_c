#include <stdio.h>
#include <conio.h>

int print_char(void);

int main(void){

    print_char();

    return 0;
}

int print_char(void){

    char str;

    printf("type character.\n");
    str = getche();

    if(str != 'q'){                             /* while is wrong (nonstop-loop) */
        printf("your character is %c\n", str);
        print_char();
    }

    return 0;
}