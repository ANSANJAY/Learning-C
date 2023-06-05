#include"declarations.h"
#include"headers.h"

int smallest(int* arr, int size)
{
int i,j,smallest;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if((*(arr+i))<(*(arr+j)))
        {
        smallest = *(arr+i);
        }
        else{
            smallest = *(arr+j);
            }
        
    }
}
return smallest;
}

