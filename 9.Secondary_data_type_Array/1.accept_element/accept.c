#include"headers.h"
#include"declaration.h"

int accept(int* ptr)
{
    int i;
    printf("enter the elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
    }
       return 0;
}
