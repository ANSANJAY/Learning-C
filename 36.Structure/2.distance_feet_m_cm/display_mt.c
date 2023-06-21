#include "headers.h"
#include "declarations.h"

void display_mt(Distance_mt * d1)
{
    printf("------Begin %s------\n", __func__);

    printf("meter : %f\n",d1->meter);
    printf("centimeter : %f\n",d1->cm);

    printf("------End %s------\n", __func__);

   
}