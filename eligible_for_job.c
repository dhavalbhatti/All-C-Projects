#include <stdio.h>

int main (){
    int num1;
    printf("Please enter your age: ");
    scanf("%d",&num1);
    if (num1 >= 18)
    {
        if (num1 < 60)
        {
            printf("Yes! You're eligible.");
        }
         else {
            printf("You passed the retirement age.");
    }
    }
    else {
    printf("You're too young for this Job!");
    }
    return 0;
}