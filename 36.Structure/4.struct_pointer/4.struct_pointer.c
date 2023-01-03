#include<stdio.h>

typedef struct box{
int ft;
float inches;
}Box;
void swap(Box*,Box*);
int main()
{
Box b1;
Box b2;
printf("Enter the size of b1:\n");
scanf("%d%f",&b1.ft,&b1.inches);
printf("Enter the size of b2:\n");
scanf("%d%f",&b2.ft,&b2.inches);
swap(&b1,&b2);
printf("Size of b1:%d %.2f\n",b1.ft,b1.inches);
printf("Size of b2:%d %.2f\n",b2.ft,b2.inches);
}
void swap(Box *p1,Box *p2)
{
int t;
//swap ft
t=p1->ft;
p1->ft=p2->ft;
p2->ft=t;
//swap inches
t=p1->inches;
p1->inches=p2->inches;
p2->inches=t;
}
