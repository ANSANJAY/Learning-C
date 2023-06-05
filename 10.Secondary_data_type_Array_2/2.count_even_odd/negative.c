#include"declarations.h"
#include"headers.h"

int count(int* arr, int size)
{
    int i,j=0,k=0;
    //int *even;
    //int *odd;
   // even = (int*)malloc(size*sizeof(int));
   // odd = (int*)malloc(size*sizeof(int));

    for (i=0;i<size;i++)
    {
    if((*(arr+i)%2)==0)
        j++;
    else
        k++;
    }
    printf("Count of even element %d\n",j);
    printf("Count of odd element %d\n",k);
    return 0;
}
