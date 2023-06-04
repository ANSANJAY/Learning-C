/*
add two arrays of size 10, store sum in third array and then display
*/

#include"headers.h"
#include"declaration.h"
 
int main()
{
    int *A;
    int *B;
    int *C;
    A = (int*)malloc(10*sizeof(int)); 
    B = (int*)malloc(10*sizeof(int)); 
    C = (int*)malloc(10*sizeof(int)); 

    accept(A,B);
    add(A,B,C);
    display(A,B,C);
 

    return 0;
}