#include"headers.h"
#include"declarations.h"

int main()
{
    int *arr;
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    arr = malloc((size)*sizeof(int));
    accept(arr,size);
    check_prime(arr,size);

}