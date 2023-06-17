#include"headers.h"
#include"declarations.h"

int subset(int * par_arr,int * subset_arr,int par_size,int subset_size)

{
    int key_found=0,i,j,key;
    for (i =0;i<subset_size;i++)
    {
        key = *(subset_arr+i);
        for(j=0;j<par_size;j++)
        {
         if(key == (*(par_arr+j)))
            {
                key_found=1;
                break;
            }

        }
    }

         if(key_found == 0)
           printf("second array is not a subset of first array\n");
           else
        printf("second array is a  subset of first array\n");
}

