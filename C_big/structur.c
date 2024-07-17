#include<stdio.h>
#include<string.h>

struct Student{
    char name[20];
    int age;
    float grade;
};

int main(void)
{
    struct Student student1;
    student1.age = 18;
    student1.grade = 17.5;
    strcpy(student1.name, "mehdi");
    printf("Hi my name is %s i am %d years old, my grade is %.1f ", student1.name, student1.age, student1.grade);

    return(0);



   


}
