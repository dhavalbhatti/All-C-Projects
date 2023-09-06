#include <stdio.h>

int main (){
    int num1,num2,num3;
    printf("Please enter Num1: ");
    scanf("%d",&num1);
    printf("Please enter Num2: ");
    scanf("%d",&num2);
    printf("Please enter Num2: ");
    scanf("%d",&num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number1 is Maximum");
        }
         else {
            printf("Number3 is Maximum");
    }
    }
     if (num2 > num3)
    {
    printf("Number2 is Maximum");
    }
    else {
    printf("Number3 is Maximum");
    }
    return 0;
}