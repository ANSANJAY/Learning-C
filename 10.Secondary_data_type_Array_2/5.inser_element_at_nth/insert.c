#include"declarations.h"
#include"headers.h"

int insert(int* arr, int size)
{
    int i,n,m;
    printf("Enter the nth location\n");
    scanf("%d",&n);
    printf("Enter the element to be inserted at  location n \n");
    scanf("%d",&m);

    for (i=size-1;i>=n;i--)
    {
                
     *(arr+(i+1))=*(arr+i);
    }
    *(arr+n)=m; 
    printf("Array after insertion : \n");
    display(arr,size+1);


    return 0;
}
