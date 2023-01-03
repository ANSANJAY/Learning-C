typedef struct student
{
int roll;
char name[20];
int * marks;
}Student;

Student* get_data();
int print_data(Student*);
