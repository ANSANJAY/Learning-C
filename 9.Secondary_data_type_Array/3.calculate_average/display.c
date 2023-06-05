#include"declarations.h"
#include"headers.h"

int display(int* arr, int size)
{
int i;
printf("Entered array :");
printf("[");
for (i=0;i<size;i++)
printf("%d\t",*(arr+i));
printf("]\n");
}