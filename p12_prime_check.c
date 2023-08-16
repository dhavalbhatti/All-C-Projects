#include <stdio.h>

int main (){
    int num1;
    printf("Please enter a number: ");
    scanf("%d",&num1);

    if (num1%2 != 0 && num1%3 != 0)
    {
    printf("The Entered Number %d is a Prime Number", num1);
    }
    else {
    printf("The Entered Number %d is NOT a Prime Number", num1);
    }
    return 0;
}