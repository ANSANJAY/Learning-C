#include"headers.h"
#include"declarations.h"

int* descending(int* arr,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
        if((*(arr+i))>(*(arr+j)))
        {
           temp = *(arr+i);
           *(arr+i)=*(arr+j);
           *(arr+j)=temp;
        }    
    }
    }
    printf("Second largest = %d\n",*(arr+1));
    printf("Second smallest = %d\n",*(arr+(size-2)));
    return arr;
}