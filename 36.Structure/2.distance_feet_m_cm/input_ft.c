#include "headers.h"
#include "declarations.h"

void input_ft(Distance_ft * d1)
{
    printf("------Begin %s------\n", __func__);
    scanf("%f",&d1->feet);
    scanf("%f",&d1->inches);
 
    printf("------End %s------\n", __func__);


}