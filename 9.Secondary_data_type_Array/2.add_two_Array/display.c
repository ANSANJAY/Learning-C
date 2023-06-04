#include"headers.h"
#include"declaration.h"

int display(int* a,int* b,int* c)
{
    int i=0;

    for(i=0;i<10;i++)
    {
        printf("A[%d] + B[%d] = C[%d]\n",i,i,i);
        printf("%d + %d = %d\n",*(a+i),*(b+i),*(c+i));
    }
   
    return 0;
}