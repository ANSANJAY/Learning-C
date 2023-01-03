#include"headers.h"
#include"declarations.h"

int print_data(Student a)
{
printf("Begin : %s\n",__func__);

printf("roll:%2d\n",a.roll);
printf("name:%s\n",a.name);
printf("marks:%2d\n",a.marks);


printf("End : %s\n",__func__);
return 0;
}
