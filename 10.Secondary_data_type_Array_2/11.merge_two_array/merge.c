#include"declarations.h"
#include"headers.h"

int merge(int * arr, int * brr,int size_1,int size_2){
    int i,j;
    int size=size_1+size_2;
    printf("size : %d\n",size);
    int *crr;
    crr = (int *)malloc(size*sizeof(int));

    for (i=0;i<size_1;i++)
    {
        *(crr+i)=*(arr+i);
    }
    for(j=0;j<size;j++)
    {
        *(crr+j+size_1)=*(brr+j);
    }
    display(crr,size);
    return 0;
}

