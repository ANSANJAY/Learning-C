#include"declarations.h"
#include"headers.h"

int largest(int* arr, int size)
{
int i,j,largest;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if((*(arr+i))>(*(arr+j)))
        {
        largest = *(arr+i);
        }
        else{
            largest = *(arr+j);
            }
        
    }
}
return largest;
}

