#include <stdio.h>

int main (){
    int n1;
    printf("Please enter the weekday (1 to 7) = ");
    scanf("%d",&n1);

    if ((n1 == 1))
    {
    printf("%d is a Monday", n1);
    }
    else if ((n1 == 2))
    {
    printf("%d is a Tuesday", n1);
    }
    else if ((n1 == 3))
    {
    printf("%d is a Wednesday", n1);
    }
    else if ((n1 == 4))
    {
    printf("%d is a Tursday", n1);
    }
    else if ((n1 == 5))
    {
    printf("%d is a Friday", n1);
    }
    else if ((n1 == 6))
    {
    printf("%d is a Saturday", n1);
    }
    else if ((n1 == 7))
    {
    printf("%d is a Sunday", n1);
    }
    else
    {
    printf("Invalid entry! PLease enter between 1 to 7 only.");
    }
    return 0;
}