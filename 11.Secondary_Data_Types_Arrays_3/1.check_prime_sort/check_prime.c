#include"headers.h"
#include"declarations.h"


int check_prime(int *arr,int size){
int num =0,i,k=0,j=0,non_prime=0;;
int *prime;
int *sorted_prime;

prime = (int *)malloc(size*(sizeof(int)));
sorted_prime = (int *)malloc(size*(sizeof(int)));
for(i=0;i<size;i++)
{
    num = *(arr+i);
    if((*(arr+i))==1)
    non_prime=1;

    non_prime=0;
for (k=2 ; k<=num/2 ;k++)
{
    if(((*(arr+i))%k) == 0)
    {
        non_prime=1;
        break;
    }
}
if(non_prime==0)
{
    *(prime+j)=*(arr+i);
     j++;
}
}

sorted_prime = sort(prime,j);
display(sorted_prime,j);

    return 0;
}