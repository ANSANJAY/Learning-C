#include"declarations.h"
#include"headers.h"

int copy(int* arr, int size)
{
    int i;
    int *brr;
    brr = (int*)malloc(size*sizeof(int));
    for (i=0;i<size;i++)
    {
     *(brr+i)=*(arr+i);
    }
    printf("Original array : \n");
    display(arr,size);
    printf("Copied array : \n");
    display(brr,size);

    return 0;
}
