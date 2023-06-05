#include"declarations.h"
#include"headers.h"

int delete(int* arr, int size)
{
    int i,n,m;
    printf("Enter the nth location to delete the element\n");
    scanf("%d",&n);
    for (i=n+1;i<=size;i++)
    {
                
     *(arr+(i-1))=*(arr+i);
    }
    printf("Array after deletion : \n");
    display(arr,size-1);


    return 0;
}
