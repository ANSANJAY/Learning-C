#include "headers.h"
#include "declarations.h"

Distance* sum(Distance * d1, Distance * d2)
{
    printf("------Begin %s------\n", __func__);
    Distance * d3;
    d3 = (Distance *)malloc(10*sizeof(Distance));
    d3->feet = d1->feet+d2->feet;
    d3->inches = d1->inches+d2->inches;
    printf("------End %s------\n", __func__);

    return d3;
}