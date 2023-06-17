#include"headers.h"
#include"declarations.h"


int display(int * arr, int size){
  int i =0;
      printf("The array is : [");
    for (i=0;i<size;i++)
    {

    printf("\t %d",*(arr+i));
    
     }
     printf("]\n");
}
