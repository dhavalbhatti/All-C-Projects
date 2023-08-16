#include <stdio.h>

int main (){
    int num1;
    printf("Please enter your age: ");
    scanf("%d",&num1);
    if (num1 >= 18)
    {
        if (num1 <= 32)
        {
            printf("Yes! You're eligible for this exam.");
        }
         else {
            printf("You passed the maximum eligible age for this exam. Not eligible.");
    }
    }
    else {
    printf("You're not eligible for this exam. Please try next year!");
    }
    return 0;
}