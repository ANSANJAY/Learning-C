#include "headers.h"
#include "declarations.h"

int main()
{
    printf("------Begin %s------\n", __func__);
    Distance_ft *d1;
    d1 = (Distance_ft *)malloc(10*sizeof(Distance_ft));
    Distance_mt *d2;
    d2 = (Distance_mt *)malloc(10*sizeof(Distance_mt));
    //Distance_mt *d3;
    //d3 = (Distance_mt *)malloc(10*sizeof(Distance_mt));
    input_ft(d1);
    display_ft(d1);

    d2 = convert(d1);
    display_mt(d2);
    printf("------End %s------\n", __func__);

    return 0;
}