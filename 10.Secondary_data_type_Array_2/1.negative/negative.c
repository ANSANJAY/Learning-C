#include"declarations.h"
#include"headers.h"

int negative(int* arr, int size)
{
    int i;
    for (i=0;i<size;i++)
    if((*(arr+i))<0)
    printf("Negative element %d\n",*(arr+i));
    return 0;
}
