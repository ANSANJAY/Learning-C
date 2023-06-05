#include"declarations.h"
#include"headers.h"

int freq(int* arr, int size)
{
    int i,j=0,k=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
        if((*(arr+j))==(*(arr+i)))
        k++;
        }
        printf("Frequency of %d is %d\n",*(arr+i),k);
        k=0;
    }


    return 0;
}
