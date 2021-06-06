#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BodyData {

    double length;
    double weight;
    double BMI;

    struct BodyData *p_data;

} BodyData, *p_BodyData;

void InputData(p_BodyData p);
void OutputData(p_BodyData p);

int main(){

    BodyData data;
    p_BodyData p_data = &data;

    InputData(p_data);
    OutputData(p_data);

    return 0;
}

void InputData(p_BodyData p_data){

    char buf[32];

    printf("Height? [m]: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    p_data->length = atof(buf);

    printf("Weight? [kg]: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    p_data->weight = atof(buf);

    p_data->BMI = p_data->weight/((p_data->length)*(p_data->length));

    return;
}

void OutputData(p_BodyData p_data){

    char output[64];
    char format[] = "Height = %3.2f[m], Weight = %5.2f[kg], BMI = %5.2f[-]\n";

    sprintf(output, format, p_data->length, p_data->weight, p_data->BMI);
    printf("%s", output);

    return;
}
