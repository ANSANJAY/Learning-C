#include "headers.h"
#include "declarations.h"

void display_ft(Distance_ft * d1)
{
    printf("------Begin %s------\n", __func__);

    printf("feet : %f\n",d1->feet);
    printf("inches : %f\n",d1->inches);

    printf("------End %s------\n", __func__);

   
}