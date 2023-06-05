#include"declarations.h"
#include"headers.h"

int average(int* arr, int size)
{
    int i;
    int sum =0;
    int average=0;
    for (i=0;i<size;i++)
        sum += *(arr+i);
    average = sum/size;
    return average;
}
