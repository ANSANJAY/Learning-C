#include"declarations.h"
#include"headers.h"

int sort(int * arr,int size){

int i , j,temp=0;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if((*(arr+i))>(*(arr+j)))
        {
        temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
        }
    }

}    
display(arr,size);



}

