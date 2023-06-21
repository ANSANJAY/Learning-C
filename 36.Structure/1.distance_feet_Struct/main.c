#include "headers.h"
#include "declarations.h"

int main()
{
    printf("------Begin %s------\n", __func__);
    Distance *d1;
    d1 = (Distance *)malloc(10*sizeof(Distance));
    Distance *d2;
    d2 = (Distance *)malloc(10*sizeof(Distance));
    Distance *d3;
    d3 = (Distance *)malloc(10*sizeof(Distance));
    input(d1);
    input(d2);
    display(d1);
    display(d2);
    d3 = sum(d1,d2);
    display(d3);
    printf("------End %s------\n", __func__);

    return 0;
}