#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_up(char *str);

int main(void){

    char str[80] = "Godiva ChoColate";

    printf("string is %s\n", str);

    string_up(str);
    printf("new string is %s\n", str);

    return 0;
}

void string_up(char *str){

    if (*str != '\0'){          /* roop is breaked by null character  */
        *str = toupper(*str);
        string_up(str + 1);     /* move address */
    }

}