#include <stdio.h>

int main (){
    int num1;
    printf("Please enter Num1: ");
    scanf("%d",&num1);

    if ((num1%3==0) && (num1%12==0))
    {
    printf("The number is divisable by 3 & 12");
    }
    else {
            printf("The number is NOT divisable by 3 & 12");
    }
    return 0;
}