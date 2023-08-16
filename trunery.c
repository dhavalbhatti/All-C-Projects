#include <stdio.h>

int main ()
{
    int age;
    printf("Please enter your age = ");
    scanf("%d", &age);
    (age >= 18  && age >0)?printf("You're an adult"):printf("You're a teenager/child");
    return 0;

}