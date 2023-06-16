#include"declarations.h"
#include"headers.h"

int reverse(int * arr,int size){
    
    int *crr,i=0;
    crr = (int *)malloc(size*sizeof(int));

    for (i=0;i<size;i++)
    {
        *(crr+((size-1)-i))=*(arr+i);
    }

    display(crr,size);
    return 0;
}

