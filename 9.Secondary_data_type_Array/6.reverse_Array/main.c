/*
reverse the array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int *brr;
    int size;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int));
    brr = (int*)malloc(size*sizeof(int));
    accept(arr,size);
    brr=reverse(arr,size);
    display(brr,size);
}