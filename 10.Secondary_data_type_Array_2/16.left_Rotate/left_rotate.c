#include"declarations.h"
#include"headers.h"

int left_rotate(int *arr,int size){

int *brr;
brr = (int *)malloc((size)*sizeof(int));

int k=0,i=0,j=0;
printf("Enter the number of rotation :\n");
scanf("%d",&k);
printf("Number of rotation : %d\n",k);

for(i=0;i<=k;i++)
{
    *(brr+((size-k)+i))=*(arr+i);
}

for(j=k;j<size;j++)
{
    *(brr+(j-k))=*(arr+j);
}
display(brr,size);


}

