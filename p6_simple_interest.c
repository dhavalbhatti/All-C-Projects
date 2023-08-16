#include <stdio.h>

int main (){
    float num1,num2,num3,result;
    printf("Please enter the Principle Amount = ");
    scanf("%f",&num1);
    printf("Please enter the Rate of Interest = ");
    scanf("%f",&num2);
    printf("Please enter Time Duration = ");
    scanf("%f",&num3);
    result=(num1*num2*num3)/100;
    printf("Simple Interest = %f", result);
    return 0;
}