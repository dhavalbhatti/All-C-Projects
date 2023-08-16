#include <stdio.h>

int main (){
    int num1;
    printf("Please enter a number: ");
    scanf("%d",&num1);

    if (num1%2 == 0)
    {
    printf("The Entered Number is a Even Number");
    }
    else {
    printf("The Entered Number is a Odd Number");
    }
    return 0;
}