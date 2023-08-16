#include <stdio.h>

int main (){
    int num1,num2;
    printf("Please enter Num1: ");
    scanf("%d",&num1);
printf("Please enter Num2: ");
    scanf("%d",&num2);
    if (num1 == num2)
    {
    printf("Both numbers are equals");
    }
    else {
            printf("Both numbers are NOT equals");
    }
    return 0;
}