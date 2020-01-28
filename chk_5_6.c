#include <stdio.h>
#include <string.h>

int main(void){

    int i=0;
    char columns[][20][80] = {
        {"ringo", "apple", "fluit"},
        {"imo", "potato", "vegitable"},
        {"hito", "human", "living"},
        {"jokyuu", "maid", "waitless"},
        {"","",""}
    };
    char temp[20];

    printf("what do you learn?\n");
    gets(temp);

    /* null statement*/
    while(strcmp(columns[i][0], "")){
            if (!strcmp(columns[i][0], temp)){
                printf("%s %s", columns[i][1], columns[i][2]);
                break;
            }
            i++;
        }
    if (!strcmp(columns[i][0], "")){
        printf("No ward in a dictionary\n");
    }

    return 0;
}