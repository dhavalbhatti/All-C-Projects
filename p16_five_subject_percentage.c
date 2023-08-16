#include <stdio.h>

int main (){
    float num1,num2,num3,num4,num5,total,percentage;
    printf("Please enter Biology marks = ");
    scanf("%f",&num1);
    printf("Please enter Geography marks = ");
    scanf("%f",&num2);
    printf("Please enter Mathematics marks = ");
    scanf("%f",&num3);
    printf("Please enter Political Science marks = ");
    scanf("%f",&num4);
    printf("Please enter Social Studies marks = ");
    scanf("%f",&num5);
    total=num1+num2+num3+num4+num5;
    percentage=total/5;
    printf("Total = %f and Percentage = %f \n", total, percentage);
    if ((percentage > 75))
    {
    printf("Grade: Distinction");
    }
    else if ((percentage <= 75 && percentage > 60))
    {
    printf("Grade: First Class");
    }
    else if (percentage <= 60 && percentage > 50)
    {
    printf("Grade: Second Class");
    }
    else if (percentage <= 50 && percentage > 35)
    {
    printf("Grade: Pass Class");
    }
    else
    {
    printf("Grade: Failed");
    }
    return 0;
}