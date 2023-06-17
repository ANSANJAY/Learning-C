#include"headers.h"
#include"declarations.h"


int check_prime(int *arr,int size){
int num =0,i=0,k=0,j=0,l=0,m=0,non_prime=0,prime=0,corect_prime=0,key=0;
int *prime_arr ;
prime_arr=(int *)malloc(size*(sizeof(int)));

while(prime<=10)
{
    num = ((*(arr))+i);
    non_prime=0;
    for (k=2;k<=num/2;k++)
    {
        
        if(((*(arr))+i)%k==0)
        {
        
            non_prime=1;
            break;
       }
    }
    if(non_prime==0)
    {
        prime++;
        *(prime_arr+j)=((*(arr))+i);
        j++;
    }
    i++;
}


for (l=0;l<size;l++)
{
    key=*(prime_arr+l);
    corect_prime=0;
    for(m=0;m<size;m++)
    {
        if(key==*(arr+m))
        {
            corect_prime=1;
            break;
        }
    }
    if(corect_prime==0)
    {
        printf("prime number not found : %d\n",key);
    }
    }
}


