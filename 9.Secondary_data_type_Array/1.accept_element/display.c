#include"headers.h"
#include"declaration.h"

int display(int* ptr)
{
    int i;
    printf("enter the elements:\n");
    printf("[");
    for(i=0;i<10;i++)
    {
        printf("%d, ",*(ptr+i));
    }
    printf("]");
    return 0;
}