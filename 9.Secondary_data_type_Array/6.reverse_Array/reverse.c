#include"headers.h"
#include"declarations.h"

int* reverse(int* arr,int size)
{
    int i,j=0;
    int *brr;
    brr = (int*)malloc(size*(sizeof(int)));
   for(i=size-1;i>=0;i--)
   {
    *(brr+j)=*(arr+i);
    j++;
   }
   return brr;
}