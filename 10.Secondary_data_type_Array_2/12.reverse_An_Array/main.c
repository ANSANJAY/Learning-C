/*
count total number of duplicate elements in an array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int size;
    printf("enter the size of  array : \n");
    scanf("%d",&size);
    
    
    arr = (int*)malloc((size)*sizeof(int));
    accept(arr,size);
    display(arr,size);
     reverse(arr,size);
    
}