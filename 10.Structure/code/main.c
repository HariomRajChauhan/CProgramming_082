#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    int roll;
    float marks;
};

int main()
{
    struct Student s1 = {"Hari",19,2,80.9};
    printf("Name %s Age %d roll %d marks %f\n",s1.name,s1.age,s1.roll, s1.marks);
    
    struct Student * ptr = &s1;
    
    scanf(" %s", ptr->name);
    scanf( "%d",&ptr->age);
    scanf( "%d",&ptr->roll);
    scanf( "%f",&ptr->marks);
    
    printf("Name %s Age %d roll %d marks %f\n",ptr->name,ptr->age,ptr->roll, ptr->marks);

    int size = sizeof(struct Student);
    printf("Size = %d\n", size);



    return 0;
}