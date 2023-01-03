#include"headers.h"
#include"declarations.h"



Student get_data()
{
printf("Begin : %s\n",__func__);
Student a; 

printf("enter roll:\n");
scanf("%d",&a.roll);
printf("enter name:\n");
scanf("%s",&a.name);
printf("enter  marks:\n");
scanf("%d",&a.marks);

printf("End : %s\n",__func__);
return a;
}

