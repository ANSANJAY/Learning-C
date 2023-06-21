#include "headers.h"
#include "declarations.h"

void display(Distance * d1)
{
    printf("------Begin %s------\n", __func__);

    printf("%d\n",d1->feet);
    printf("%f\n",d1->inches);

    printf("------End %s------\n", __func__);

   
}