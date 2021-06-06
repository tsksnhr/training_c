#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int NO = 2;

// struct template
typedef struct Student {

    char name[32];
    int score;
    struct Student *next;

} StudentData, *pStudentData;

void InputData(pStudentData pdata);
void OutputData(pStudentData pdata);
void SearchData(pStudentData pdata);

int main(){

    StudentData datasets[NO];
    pStudentData pdata = datasets;

    for (int i = 0; i < NO; i++){
        InputData(pdata + i);
        
        if (i+1 < NO){
            (pdata + i)->next = (pdata + i + 1);
        }
        else {
            (pdata + i)->next = NULL;
        }
    }

    /*
    for (int i = 0; i < NO; i++){
        OutputData(pdata + i);
    }
    */

   SearchData(pdata);

    return 0;
}

void InputData(pStudentData pdata){

    char c_buf[32]; 
    char score[32];

    printf("Name?: ");
    fgets(c_buf, sizeof(c_buf), stdin);
    c_buf[strlen(c_buf) - 1] = '\0';
    strcpy(pdata->name, c_buf);

    printf("score?: ");
    fgets(score, sizeof(score), stdin);
    score[strlen(score) - 1] = '\0';
    pdata->score = atoi(score);

    return;
}

void OutputData(pStudentData pdata){

    char str[64];
    char format[] = "name: %s, score: %d\n";

    sprintf(str, format, pdata->name, pdata->score);
    printf("%s", str);

    return;
}

void SearchData(pStudentData pdata){

    int flg = 0;
    char buf[32];

    printf("Name?: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';

    for (pStudentData p = pdata; p != NULL; p = p->next){
        int is_not_same = strcmp(p->name, buf);
        if (is_not_same) continue;
        else {
            printf("Data Exists.\n");
            OutputData(p);
            return;
        }
    }

    printf("No data exists.\n");
    return;
}
