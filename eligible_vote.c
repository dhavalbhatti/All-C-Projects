#include <stdio.h>

int main (){
    int num1;
    printf("Please enter your age: ");
    scanf("%d",&num1);

    if (num1 >= 18)
    {
    printf("Congratulations! You're eligible to vote");
    }
    else {
    printf("You're NOT eligible to vote");
    }
    return 0;
}