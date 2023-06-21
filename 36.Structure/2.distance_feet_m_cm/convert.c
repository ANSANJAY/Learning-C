#include "headers.h"
#include "declarations.h"

Distance_mt* convert(Distance_ft * d1)
{
    printf("------Begin %s------\n", __func__);
    Distance_mt * d2;
    d2 = (Distance_mt*)malloc(10*sizeof(Distance_mt));

    d2->meter = (0.3048)*(d1->feet);
    d2->cm = (2.54)*(d1->inches);
    printf("------End %s------\n", __func__);

    return d2;
}