#include <stdio.h>

int main (){
    int num1;
    printf("Please enter the YEAR: ");
    scanf("%d",&num1);

    if (num1%4 == 0 || num1%400 == 0)
    {
    printf("Yeah, It's a leap year");
    }
    else {
    printf("It's not a leap year");
    }
    return 0;
}