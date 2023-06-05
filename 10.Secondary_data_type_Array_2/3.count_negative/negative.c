#include"declarations.h"
#include"headers.h"

int negative(int* arr, int size)
{
    int i,j=0;
    for (i=0;i<size;i++)
    {
    if((*(arr+i))<0)
    j++;
    }
    printf("Toal Negative element %d\n",j);

    return 0;
}
