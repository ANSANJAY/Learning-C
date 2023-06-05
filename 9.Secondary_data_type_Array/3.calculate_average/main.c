/*
calculate average of all elememts in the array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int size,avg;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    accept(arr,size);
    display(arr,size);
    avg = average(arr,size);
    printf("Average is:%d\n",avg);
}