/*
print all unique elements of an array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int size;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = (int*)malloc((size+1)*sizeof(int));
    accept(arr,size);
    unique(arr,size);
    
}