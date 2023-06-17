#include"headers.h"
#include"declarations.h"

int * sort(int * arr, int size)
{
    int i,j,temp=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if (*(arr+j)<*(arr+i))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                }
        }
    }
 return arr;

}