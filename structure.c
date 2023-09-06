#include <stdio.h>

// structure syntax

// struct struct_name
// {
//     int age;
//     float salary;
//     double bills;
//     char name;
// }s1;

// struct struct_name s1={1,2.3,4.5,'a'};

struct structure_name
{
    int age;
    double salary;
    char name[20];
}s1;

int main()
{
    struct structure_name s1 = {36,50000000,"Dhaval"};
    struct structure_name s2 = {40,4000000000,"Dhaval Bhatti"};
    printf("Age: %d \n", s1.age);
    printf("Salary: %.2lf \n", s1.salary);
    printf("Name: %s \n", s1.name);
    printf("\n");
    printf("Age: %d \n", s2.age);
    printf("Salary: %.2lf \n", s2.salary);
    printf("Name: %s \n", s2.name);
    return 0;
}
