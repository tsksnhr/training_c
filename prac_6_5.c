#include  <stdio.h>
#include <string.h>

int main(void){

    char *str[] = {
        "Yes",
        "No",
        "I don't understand"
    };
    char ques[80];
    int length, index;

    printf("What's your question?\n");
    gets(ques);

    length = strlen(ques);
    index = length%3;

    printf(str[index]);    

    return 0;
}