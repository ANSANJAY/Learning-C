#include "headers.h"
#include "declaration.h"

int* add(int* a, int *b,int* c)
{

int i;
for(i=0;i<10;i++)
{
*(c+i)=*(a+i)+*(b+i);
}
return c;
}