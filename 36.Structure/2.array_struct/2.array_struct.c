#include<stdio.h>

struct student
{
	int roll;
	char name[50];
	int marks;
};
int main()
{	
	int i;
	struct student s1={11,"ram",20};	
	struct student s2[2]={{33,"xyz",99},{44,"prem",60}};
	for(i=0;i<2;i++)
	{
	printf("roll: %d\n",s2[i].roll);
	printf("name: %s\n",s2[i].name);
	printf("marks: %d\n",s2[i].marks);
	}
	return 0;
}
