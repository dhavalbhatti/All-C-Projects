#include <stdio.h>

int main (){
    int num1;
    printf("Please enter Num1: ");
    scanf("%d",&num1);

    if (num1 > 0)
    {
    printf("The Entered Number is a Positive Number");
    }
    else if (num1 == 0)
    {
    printf("You entered 0");
    }
    else {
    printf("The Entered Number is a Negative Number");
    }
    return 0;
}