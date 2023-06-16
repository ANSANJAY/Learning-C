#include"declarations.h"
#include"headers.h"

int search(int * arr,int size){
    
    int i,key;
printf("Enter the key to be searched : \n");
scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(key==(*(arr+i))){

        printf("Keys : %d found at index %d\n", key,i);
        break;
        }
    }   
    printf("%d",i);
    if(i==size)
    printf("key not found");
   
}

