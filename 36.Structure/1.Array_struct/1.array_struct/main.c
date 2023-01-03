
#include"headers.h"
#include"data_strcuture.h"

int main()
{
#ifdef PRINT
        print("%s : Begin",__func__);
#endif

int i;

Student s1[4]={{"Ana",1,99},{"San",2,88},{"d",3,77},{"A",4,66}};
for(i=0;i<4;i++)
{
printf("name : %s\n",s1[i].name);
printf("roll : %d\n",s1[i].roll);
printf("marks : %f\n",s1[i].marks);
}


#ifdef PRINT
	print("%s : End",__func__);
#endif
return 0;
}

