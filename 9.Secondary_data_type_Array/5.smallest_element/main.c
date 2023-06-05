/*
calculate smallest of all elememts in the array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int size,small;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    accept(arr,size);
    display(arr,size);
    small=smallest(arr,size);
    printf("smallest element : %d\n",small);
}