#include "headers.h"
#include "declarations.h"

void input(Distance * d1)
{
    printf("------Begin %s------\n", __func__);
    scanf("%d",&d1->feet);
    scanf("%f",&d1->inches);
 
    printf("------End %s------\n", __func__);


}