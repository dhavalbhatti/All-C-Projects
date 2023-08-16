#include <stdio.h>

int main (){
    int n1;
    printf("Please enter the number = ");
    scanf("%d",&n1);

    if ((n1 > 100))
    {
    printf("%d is greter then 100", n1);
    }
    else if ((n1 < 100))
    {
    printf("%d is less then 100", n1);
    }
    else if ((n1 == 100)) 
    {
    printf("%d is equal to 100", n1);
    }
    else
    {
    printf("%d is NOT a number", n1);
    }
    return 0;
}