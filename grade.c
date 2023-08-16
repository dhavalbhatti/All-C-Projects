#include <stdio.h>

int main (){
    float n1;
    printf("Please enter your grade (1 to 100) = ");
    scanf("%f",&n1);

    if ((n1 < 35))
    {
    printf("%f is less than passing marks and you need to re-appear for the exam.", n1);
    }
    else if ((n1 >= 35 && n1 <= 60))
    {
    printf("Congratulations! You passed the exam with B- Grade");
    }
    else if ((n1 > 60 && n1 <= 70))
    {
    printf("Congratulations! You passed the exam with B+ Grade");
    }
    else if ((n1 > 70 && n1 <= 80))
    {
    printf("Congratulations! You passed the exam with A- Grade");
    }
    else if ((n1 > 80 && n1 <= 90))
    {
    printf("Congratulations! You passed the exam with A+ Grade");
    }
    else if ((n1 > 90 && n1 <= 100))
    {
    printf("Excellent! You passed the exam with A++ Grade. You're one of the TOP10 students.");
    }
    else
    {
    printf("Invalid entry! PLease enter grade between 1 to 100 only.");
    }
    return 0;
}