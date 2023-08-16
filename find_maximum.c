#include <stdio.h>

int main (){
    int num1,num2;
    printf("Please enter Num1: ");
    scanf("%d",&num1);
printf("Please enter Num2: ");
    scanf("%d",&num2);
    if (num1 > num2)
    {
    printf("Number1 is Maximum");
    }
     if (num1 == num2)
    {
    printf("Both numbers are equals");
    }
    else {
            printf("Number2 is Maximum");
    }
    return 0;
}