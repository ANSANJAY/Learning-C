#include"headers.h"
#include"declarations.h"



int main()
{
printf("Begin : %s\n",__func__);
Student s1,s2;
s1=get_data();
s2=get_data();
print_data(s1);
print_data(s2);


printf("End : %s\n",__func__);
return 0;
}
