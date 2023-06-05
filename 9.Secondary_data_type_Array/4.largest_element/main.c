/*
calculate largest of all elememts in the array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int size,lar;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    accept(arr,size);
    display(arr,size);
    lar=largest(arr,size);
    printf("largest element : %d\n",lar);
}