#include"declarations.h"
#include"headers.h"

int dup_delete(int * arr, int size){

int i, j,k,dup=0;
for (i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if((*(arr+i))==(*(arr+j)))
        {
            if(i==j)
            break;
            else
            {
            dup++;
            printf("duplicate at %d\n",i);
            for(k=i;k<size;k++)
            {
            *(arr+k)=*(arr+(k+1));
            
            }
            }
            break;
    
        }

    }
}
    size=size-dup;

    
    display(arr,size);
    return 0;
}

