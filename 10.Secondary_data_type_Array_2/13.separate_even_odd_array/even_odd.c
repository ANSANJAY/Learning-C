#include"declarations.h"
#include"headers.h"

int even_odd(int * arr,int size){
    
    int i=0,k=0,l=0;
    int *even;
    int *odd;

    even = (int *)malloc(size*sizeof(int));
    odd = (int *)malloc(size*sizeof(int));

    for (i=0;i<size;i++)
    {
        if((*(arr+i))%2==0)
        {
            *(even+k)=*(arr+i);
            k++;
        }
        else{
        *(odd+l)=*(arr+i);
        l++;
        }
    }


    display(even,(k));
    display(odd,(l));

    return 0;
}

