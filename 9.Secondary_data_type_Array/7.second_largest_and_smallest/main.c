/*
implement 1d array
sort the array in descending order
find second largest element
find second smallest element
find avg of these element
search this element in array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr;
    int *sorted;
    int size,key;
    float avg;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int));
    sorted = (int*)malloc(size*sizeof(int));
    accept(arr,size);
    sorted=descending(arr,size);
    printf("Sorted Array : \n");
    display(sorted,size);
    printf("Second largest = %d\n",*(arr+1));
    printf("Second smallest = %d\n",*(arr+(size-2)));
    avg = average(*(arr+1),*(arr+(size-2)));
    printf("average = %f\n",avg);
    key=search(arr,size,avg);
    if(key!=0)
    printf("Average is in the array at %dth location\n",key+1);
    else   
    printf("Average not in the array\n");
}