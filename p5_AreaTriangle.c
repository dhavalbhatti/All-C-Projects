#include <stdio.h>

int main (){
    float num1,num2,area;
    printf("Please enter Base: ");
    scanf("%f",&num1);
    printf("Please enter Height: ");
    scanf("%f",&num2);
    area=(num1*num2)/2;
    printf("Here is the area of triangle %f", area);
    return 0;
}