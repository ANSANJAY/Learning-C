#include"headers.h"
#include"declarations.h"

int main()
{
    int *par_arr;
    int *subset_arr;
    int par_size,subset_size;
    printf("Enter the size of parent array: \n");
    scanf("%d",&par_size);
    par_arr = (int *)malloc((par_size)*sizeof(int));
    accept(par_arr,par_size);

     printf("Enter the size of subset array: \n");
    scanf("%d",&subset_size);
    subset_arr = (int *)malloc((subset_size)*sizeof(int));
    accept(subset_arr,subset_size);

    subset(par_arr,subset_arr,par_size,subset_size);

}