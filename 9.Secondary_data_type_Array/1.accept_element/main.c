/*
accept element into array of size 10 
*/

#include"headers.h"
#include"declaration.h"
 
int main()
{
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int)); 
    accept(ptr);
    display(ptr);

    return 0;
}