#include"headers.h"
#include"declarations.h"

int search(int* arr,int size,float avg)
{
    int i;
    for (i=0;i<size;i++)
    {
        if(avg == (float)*(arr+i))
        return i;
    }   
    return 0;
}