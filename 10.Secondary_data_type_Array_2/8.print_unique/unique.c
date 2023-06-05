#include"declarations.h"
#include"headers.h"

int unique(int* arr, int size)
{
    int i,j,not_unique=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
        if((*(arr+j))==(*(arr+i)))
        not_unique++;
        }
        if(not_unique==1)
        printf("Unique element %d \n",*(arr+i));
        not_unique=0;

    }
    return 0;
}
