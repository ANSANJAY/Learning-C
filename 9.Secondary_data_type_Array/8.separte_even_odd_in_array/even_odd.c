#include"headers.h"
#include"declarations.h"

int even_odd(int* arr,int size)
{
    int i;
    int j=0;
    int k=0;
    int *even;
    int *odd;
    even = (int*)malloc(size*(sizeof(int)));
    odd = (int*)malloc(size*(sizeof(int)));
   for(i=0;i<size;i++)
   {
    if((*(arr+i)%2)==0)
    {
    *(even+j)=*(arr+i);
    j++;
 
    }
    else
    {
        *(odd+k)=*(arr+i);
        k++;
    }  
   }
    printf("Even array : \n");
    display(even,j);
    printf("Odd array : \n");
    display(odd,k);

}