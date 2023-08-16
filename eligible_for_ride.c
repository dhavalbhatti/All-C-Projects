#include <stdio.h>

int main (){
    int num1;
    printf("Please enter your age: ");
    scanf("%d",&num1);
    if (num1 >= 15)
    {
        if (num1 <= 45)
        {
            printf("Yes! You're eligible to ride.");
        }
         else {
            printf("You may go at your own risk!");
    }
    }
    else {
    printf("You can't ride! It's not safe for you to go for it.");
    }
    return 0;
}