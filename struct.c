#include <stdio.h>
#define pi 3.14

typedef struct Student
{
    char *name;
    int id;
    int age;
}Student;

int main()
{
    Student student1;
    student1.name = "ahmed";
    student1.id = 11;
    student1.age = 38;
    printf("%s \n", student1.name);
    // array of struct

    Student studentsArray[2];
    studentsArray[0].age = 10;
    studentsArray[1].age = 12;
    printf("%d \n", studentsArray[0].age);

    const int id = 5;
    printf("%d \n", id);
    printf("%f \n", pi);
    return 0;
}