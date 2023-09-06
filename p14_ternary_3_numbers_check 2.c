#include <stdio.h>

int main (){
    int num1,num2,num3;
    printf("Please enter Num1: ");
    scanf("%d",&num1);
    printf("Please enter Num2: ");
    scanf("%d",&num2);
    printf("Please enter Num2: ");
    scanf("%d",&num3);
    int result = num1 > num2 ? (num1 > num3 ? "Number1 is Maximum" : "Number3 is Maximum") : (num2 > num3 ? "Number2 is Maximum" : "Number3 is Maximum");
    return 0;
}