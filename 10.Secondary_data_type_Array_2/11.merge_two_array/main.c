/*
count total number of duplicate elements in an array
*/

#include "declarations.h"
#include "headers.h"

int main()
{
    int *arr,*brr;
    int size_1,size_2;
    printf("enter the size of  first array : \n");
    scanf("%d",&size_1);
    printf("enter the size of  second array : \n");
    scanf("%d",&size_2);
    
    arr = (int*)malloc((size_1)*sizeof(int));
    accept(arr,size_1);
    display(arr,size_1);
    
    brr = (int*)malloc((size_2)*sizeof(int));
    accept(brr,size_2);
     display(brr,size_2);
    merge(arr,brr,size_1,size_2);
    
}