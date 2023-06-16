#include"declarations.h"
#include"headers.h"

int dup_count(int * arr, int size){

int i, j,temp =0,dup=0;
for (i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if((*(arr+i))==(*(arr+j)))
        {
            if(i==j)
            break;
            else
            dup++;
            break;
        }
    }
}
    
    if (dup==0)
    printf("no duplicates");
    else
    printf("duplicate : %d\n",dup);
    return 0;
}

